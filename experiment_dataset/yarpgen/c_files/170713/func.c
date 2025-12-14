/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170713
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 *= ((/* implicit */signed char) 7980209029301144387LL);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_14))));
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) -8949044408339385694LL))));
                        var_19 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1 + 1]))))) / (max((((/* implicit */unsigned int) var_8)), (1437244671U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) (signed char)44))))) ? (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) max((var_15), (var_9)))))))));
                        var_20 = ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) -1755681839)))) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (signed char)106)))), ((((!(var_2))) ? (((/* implicit */int) ((-1943467970) != (((/* implicit */int) (signed char)-126))))) : ((-(var_0)))))));
                        arr_10 [i_3] [i_1] [i_1] [18LL] = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) (signed char)38)) != (((((var_4) + (2147483647))) << (((arr_4 [i_1] [i_1 + 1] [i_1]) - (1444216956)))))))) : (((/* implicit */signed char) ((((/* implicit */int) (signed char)38)) != (((((var_4) + (2147483647))) << (((((((arr_4 [i_1] [i_1 + 1] [i_1]) - (1444216956))) + (393177691))) - (29))))))));
                    }
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        arr_13 [i_4] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)11347))));
                        arr_14 [i_4] [i_1] [i_1] [i_0] = var_1;
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_5] [i_2 + 1] [i_1] [i_1] [i_0] = max(((unsigned short)15009), (((/* implicit */unsigned short) (_Bool)1)));
                        arr_18 [i_1] [i_1] = ((/* implicit */_Bool) var_9);
                    }
                    arr_19 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)17518))));
                    var_21 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_5 [i_2 - 1] [14] [14] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_1 + 1] [i_0])) ? (((/* implicit */int) var_9)) : (max((((/* implicit */int) (_Bool)1)), (-1311509052))))) : (((/* implicit */int) var_14))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        for (unsigned short i_7 = 1; i_7 < 7; i_7 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) (+((-(((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7] [i_6]))) - (-1LL)))))));
                arr_24 [i_7 + 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_22 [i_7 + 2] [i_7 + 2] [i_7 + 3])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (max((((/* implicit */long long int) (short)-23416)), (9094520818049296002LL))))) < (((/* implicit */long long int) (~(((/* implicit */int) (short)-23428)))))));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(max(((!(((/* implicit */_Bool) var_15)))), ((_Bool)1))))))));
            }
        } 
    } 
}
