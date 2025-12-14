/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150902
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_1)))) ? (var_6) : (((/* implicit */long long int) min((315200955), (-1133980948))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            var_17 = ((unsigned long long int) max((((/* implicit */unsigned long long int) var_15)), (((var_9) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_2))))));
            var_18 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_2 [i_0] [i_0])) : (2216317647U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_11)) : (arr_1 [i_0])))))) << (((((arr_3 [i_1 + 1] [i_0]) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_3 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (signed char)68)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))) - (73LL)))));
            var_19 = var_1;
            arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
            var_20 = ((/* implicit */int) min((min((arr_0 [i_1 + 1] [i_0]), (arr_0 [i_0] [i_1 - 1]))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) -1)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))));
        }
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) arr_0 [i_0] [i_2]);
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) ((arr_0 [i_0] [i_0]) < (arr_0 [i_0] [i_0]))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) ((unsigned int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (short i_9 = 1; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((int) (-(((long long int) arr_20 [i_5] [i_5] [i_5] [i_8])))));
                                arr_25 [i_5] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (((unsigned short) var_10)))))));
        var_26 = ((_Bool) ((unsigned long long int) var_3));
        arr_26 [i_5] [i_5] = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_20 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) var_14))))) ? (((/* implicit */int) (unsigned char)214)) : (((((/* implicit */_Bool) arr_7 [(signed char)20])) ? (8388608) : (((/* implicit */int) arr_13 [i_5]))))));
    }
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (max((var_2), (((/* implicit */unsigned int) var_5))))))));
}
