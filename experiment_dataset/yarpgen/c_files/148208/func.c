/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148208
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (max((var_10), (((/* implicit */long long int) (signed char)0)))) : (((/* implicit */long long int) -1318659023))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)28672)), (var_9)))) & ((+(8127991603097685738LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned int) -1318659023)) : (var_9)))) ? (((/* implicit */unsigned long long int) ((8404317090847210316LL) << ((((((((-2147483647 - 1)) - (-2147483644))) + (5))) - (1)))))) : ((-(var_5)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (6040283462902353835LL) : (((/* implicit */long long int) -1318659046)))), (((/* implicit */long long int) var_2))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned char i_3 = 3; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min(((+((-(1802190454736271244ULL))))), (((/* implicit */unsigned long long int) ((long long int) ((281474976710655LL) | (((/* implicit */long long int) -1318659040))))))));
                            arr_14 [i_2] |= ((/* implicit */short) arr_12 [i_0]);
                            var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_4] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1])) / (((/* implicit */int) (signed char)91))))) > (min((-4804510903098490587LL), (((/* implicit */long long int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_3 - 3]))))));
                            arr_15 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (536870911ULL))))) ? (((/* implicit */unsigned long long int) (~(((2147483635) ^ (((/* implicit */int) arr_8 [i_0] [i_4] [i_0] [i_4]))))))) : (min(((+(var_7))), (((/* implicit */unsigned long long int) ((arr_1 [i_4]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))))))))));
                            arr_16 [i_1] [i_1] [i_3] [i_3] [i_4] = var_11;
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))), (((int) var_6))));
                var_19 = ((/* implicit */unsigned char) var_4);
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        {
                            arr_23 [i_0] |= ((/* implicit */signed char) ((long long int) arr_7 [i_0] [i_0]));
                            arr_24 [i_0] [i_7] [i_5] [i_0] [i_7] [i_7] [i_0] = ((/* implicit */unsigned int) ((-1318659039) >= (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_7)))))))));
                            var_20 = (~(((/* implicit */int) arr_19 [i_7] [i_6] [i_5] [i_0])));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_7 [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 + 1] [i_1 + 1])))) ? (((unsigned long long int) (short)-7691)) : (((unsigned long long int) var_0))));
            }
            var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_1 + 1] [i_1 - 1] [i_0]) <= (((/* implicit */long long int) var_1)))))) <= (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_1])) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) 1318659016))))));
        }
        for (short i_8 = 1; i_8 < 22; i_8 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) (+(min((min((var_12), (((/* implicit */int) (signed char)119)))), ((-2147483647 - 1))))));
            arr_27 [i_8] [i_0] = ((/* implicit */short) (-((((+(((/* implicit */int) var_0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
        }
    }
}
