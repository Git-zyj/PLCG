/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104627
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
    var_12 = -2070100597777213397LL;
    var_13 ^= ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] = ((/* implicit */int) max((((((((/* implicit */_Bool) 2070100597777213396LL)) ? (var_4) : (var_10))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_2] [i_1] [i_1]))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) / (((/* implicit */int) arr_0 [i_1] [i_2])))) * (((/* implicit */int) var_9)))))));
                                var_14 ^= ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                                var_15 *= max((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_3]))))));
                                var_16 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = arr_1 [i_4 + 2];
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_5 = 2; i_5 < 20; i_5 += 2) 
                    {
                        arr_18 [i_2] = min((min((((/* implicit */unsigned long long int) arr_10 [i_0])), (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) arr_17 [i_0] [14] [i_0] [i_2] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_5])));
                        arr_19 [i_2] [i_2] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) ((_Bool) 6847066083074652304ULL))), ((-(var_5)))))));
                        var_17 = ((/* implicit */unsigned long long int) ((arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]) > (((/* implicit */int) arr_9 [i_5 + 2] [i_5 + 2] [i_5]))));
                    }
                    for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_18 ^= ((/* implicit */unsigned short) 1464243961250694591ULL);
                        var_19 = ((/* implicit */int) max((((arr_7 [i_2] [i_1]) > (((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]))))))), ((_Bool)0)));
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 2070100597777213397LL)), (4308211848966870812ULL)));
                    }
                    for (unsigned char i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        arr_25 [i_0] [i_1] [i_1] [(short)5] [i_7] [i_2] = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) var_7)));
                        var_21 = ((/* implicit */unsigned char) (((~(min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0])), (var_6))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2])))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 11599677990634899301ULL))));
                    }
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
