/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148050
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(arr_5 [i_0 - 1] [i_1] [i_2 + 2]))))));
                    var_19 &= ((/* implicit */short) (-(((/* implicit */int) var_14))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] = (short)(-32767 - 1);
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [(short)12] [i_0] [i_0] [i_0] = ((/* implicit */short) var_0);
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) (_Bool)0))));
                                arr_23 [i_0] [(short)10] [i_0 + 1] [i_0] [i_0] [11LL] [i_0] = ((((/* implicit */_Bool) (signed char)(-127 - 1))) && ((_Bool)1));
                                var_21 = ((/* implicit */long long int) arr_5 [i_6] [i_6] [i_6]);
                                var_22 = ((/* implicit */long long int) (((((((_Bool)1) ? (((/* implicit */int) (short)25797)) : (((/* implicit */int) var_17)))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)15682)) : (-349212549))))) ? (max(((-(((/* implicit */int) var_5)))), ((+(((/* implicit */int) (short)15682)))))) : (((/* implicit */int) ((max((((/* implicit */int) arr_10 [i_1] [i_0])), (var_6))) != (((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))))));
                            }
                        } 
                    } 
                }
                var_23 += ((/* implicit */_Bool) ((((/* implicit */int) min((max(((short)25797), ((short)-25798))), (((/* implicit */short) (unsigned char)124))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) arr_17 [i_0] [(short)7] [i_0] [i_0 + 1])))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)25013)) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-29)))))))) ? (((((/* implicit */_Bool) (~(0)))) ? (((/* implicit */int) (short)-21096)) : ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) ((short) -1451733900))))))));
}
