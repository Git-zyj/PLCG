/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141581
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) (((-(16816097130076619102ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)86)) * (((/* implicit */int) arr_7 [i_2] [2ULL] [i_2] [i_2]))))) <= (((((/* implicit */_Bool) -1146404582)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_1 [i_0])))))))));
                        arr_11 [i_0] [i_2] [1LL] [i_0] [i_0] = ((/* implicit */long long int) var_1);
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (unsigned short)64258))))))));
                        arr_12 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) arr_6 [i_2])), (var_17))) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) min((arr_3 [i_0] [7ULL]), (((/* implicit */unsigned long long int) (unsigned short)49419))));
                        var_23 *= ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [(_Bool)1] [i_4] [(_Bool)1] [i_2] [i_0] [i_0])) * (var_2))) == (((((/* implicit */int) (unsigned char)142)) + (((/* implicit */int) (unsigned char)182))))));
                        var_24 = ((/* implicit */short) var_13);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) + ((+(((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))));
                    }
                    var_26 = ((/* implicit */short) (-((+((+(-4997867633728311000LL)))))));
                }
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned short i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        {
                            arr_19 [9LL] [i_1] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_5 + 1] [(short)2] [i_0])) % (((/* implicit */int) arr_0 [i_6 - 1] [i_5 + 2]))))), (((((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [11ULL] [i_6 + 1] [i_5 + 1] [i_1] [8LL]))) : (arr_3 [i_6 - 1] [i_0]))) | (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */long long int) (short)1792)))))))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_6 + 1] [i_0])) : (((/* implicit */int) ((short) (unsigned char)132)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)35)) || (((/* implicit */_Bool) (unsigned short)16117))))) : (((/* implicit */int) ((unsigned short) 4618350981545533227LL)))));
                            var_28 |= ((/* implicit */short) ((((/* implicit */int) ((4997867633728311013LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64258)))))) == (((/* implicit */int) ((min((var_15), (((/* implicit */long long int) var_5)))) <= (((((/* implicit */_Bool) arr_3 [i_6] [i_0])) ? (arr_4 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_5 [i_0] [12U] [12U]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 11; i_7 += 4) 
                {
                    for (long long int i_8 = 4; i_8 < 11; i_8 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((unsigned char) var_10));
                            arr_26 [i_8] [i_8 - 1] [i_7] [i_1] [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)121))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-1774))));
    var_32 = ((/* implicit */unsigned long long int) var_13);
}
