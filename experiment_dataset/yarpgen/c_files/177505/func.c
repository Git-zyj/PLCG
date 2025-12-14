/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177505
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) arr_4 [i_3]);
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned int) (-(arr_1 [i_0 + 3] [i_0 - 1])))))));
                    }
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) min(((~(max((6121644135902529498LL), (-6121644135902529498LL))))), (((long long int) arr_8 [i_1] [i_1]))));
                        var_23 *= min((max((-6121644135902529498LL), (-1LL))), (((/* implicit */long long int) ((arr_5 [i_4 - 1] [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) max(((unsigned short)64557), (var_3)))) : (arr_6 [i_4 + 3])))));
                        var_24 = ((/* implicit */unsigned short) var_11);
                    }
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_25 *= ((/* implicit */unsigned int) ((unsigned short) (~(arr_13 [i_5] [i_1 + 2] [i_5] [i_1 + 2] [i_0]))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_26 = min((((/* implicit */long long int) (unsigned char)249)), (arr_1 [i_0] [10LL]));
                            var_27 = ((/* implicit */short) (!((_Bool)1)));
                            var_28 = (((!(((/* implicit */_Bool) arr_1 [i_0] [i_1 + 2])))) ? (((long long int) 567453553048682496LL)) : (((/* implicit */long long int) ((942180879U) << (((((/* implicit */int) (unsigned short)35672)) - (35661)))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_29 = (!(((/* implicit */_Bool) arr_13 [i_7] [i_5 + 3] [i_1 + 1] [i_0 + 2] [i_0 + 2])));
                            var_30 = ((/* implicit */long long int) min((var_30), (min((max((((/* implicit */long long int) min((var_3), (arr_7 [i_0] [i_0] [5LL] [i_0])))), (arr_18 [i_0 - 3] [0LL]))), (((long long int) ((short) (_Bool)1)))))));
                        }
                    }
                    var_31 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) (_Bool)1)), (-1LL)));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_10))))) && (((/* implicit */_Bool) ((unsigned short) var_14))))))));
    var_33 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : ((~(-1795953331))))) + (((/* implicit */int) (!(((_Bool) var_2)))))));
}
