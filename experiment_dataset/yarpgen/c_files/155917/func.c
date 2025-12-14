/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155917
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) >= (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (2147483647)))))))) >= (((((/* implicit */long long int) (+(arr_0 [i_0])))) * (((long long int) arr_2 [i_0]))))));
        var_19 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_0 [i_0]) >= (arr_0 [i_0]))))));
        var_20 += ((/* implicit */_Bool) 2147483638);
        var_21 = ((/* implicit */long long int) (-(((((/* implicit */int) ((_Bool) arr_0 [i_0]))) * (((int) arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))) >= (17789468880101687036ULL)));
        var_22 += ((/* implicit */unsigned short) arr_2 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (int i_3 = 4; i_3 < 16; i_3 += 1) 
            {
                {
                    var_23 ^= ((((/* implicit */unsigned long long int) ((arr_4 [i_3 + 1]) * (((/* implicit */int) arr_9 [i_3] [i_3 - 4] [i_3 - 4] [i_3 - 2]))))) / ((-(((((/* implicit */unsigned long long int) arr_0 [i_1])) * (6786284142505286629ULL))))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) >= (531454945213234608LL)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((short) 2147483638));
                            arr_16 [i_1] [i_3] [i_4] [i_5] = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) 629639768)) >= (arr_15 [i_1] [i_2] [i_3 - 1] [i_4] [i_5])))));
                        }
                        var_26 |= ((/* implicit */short) (signed char)100);
                    }
                    arr_17 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (2446642333612837924LL))) ? ((+((-(((/* implicit */int) arr_2 [i_1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 852986136)))))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */short) arr_2 [i_6]);
        arr_20 [i_6] = ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_6] [i_6]));
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_6]))))) : ((-(arr_13 [i_6] [i_6] [i_6]))))))));
        var_30 = ((/* implicit */int) arr_13 [i_6] [i_6] [i_6]);
        var_31 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_7 [i_6] [i_6])))) * (((/* implicit */int) (!(arr_9 [i_6] [i_6] [i_6] [i_6]))))));
    }
    var_32 ^= ((/* implicit */unsigned int) -2147483633);
    var_33 &= ((/* implicit */int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) 2147483639))));
    var_34 = ((/* implicit */_Bool) ((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) >= (((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756)))))))))));
}
