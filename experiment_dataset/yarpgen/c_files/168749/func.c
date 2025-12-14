/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168749
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
    var_14 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_0)) : (var_9)))) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (var_13))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */int) (!(((_Bool) arr_11 [i_3] [i_1] [i_3] [i_3] [i_3] [i_2 - 3] [i_3]))))) % ((-(arr_0 [i_4])))));
                                arr_12 [i_0] [i_0] [i_1 + 1] [i_3] [i_0] = ((/* implicit */short) (+(((int) ((((/* implicit */_Bool) 8672801061635355801ULL)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) min((((min((var_9), (var_9))) & (((/* implicit */unsigned long long int) ((int) var_10))))), (((/* implicit */unsigned long long int) ((arr_8 [i_2 + 2] [i_2] [i_2] [i_2 - 3] [i_2 - 2]) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_0])))))));
                    var_18 = ((/* implicit */short) (_Bool)1);
                    var_19 -= ((/* implicit */_Bool) var_13);
                    arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0] [i_1])))))))) > ((~(((/* implicit */int) (signed char)111))))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_7 = 2; i_7 < 20; i_7 += 3) 
                {
                    var_20 *= ((/* implicit */_Bool) max((min((min((((/* implicit */unsigned long long int) arr_17 [14ULL] [7U])), (var_4))), (max((((/* implicit */unsigned long long int) var_2)), (var_4))))), (((/* implicit */unsigned long long int) var_12))));
                    arr_21 [i_5] &= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) min((var_10), (var_8)))), (((((/* implicit */_Bool) arr_20 [i_7 + 1])) ? (((/* implicit */int) arr_16 [i_6])) : (var_11))))))));
                }
                arr_22 [i_6] = ((/* implicit */unsigned int) ((signed char) var_12));
                var_21 -= max((((/* implicit */signed char) (_Bool)0)), ((signed char)39));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    var_23 = ((/* implicit */signed char) (~(var_13)));
}
