/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110546
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 6; i_4 += 3) 
                        {
                            {
                                arr_17 [9LL] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [i_1 - 1])) ? (arr_9 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), ((+(arr_9 [i_1 - 1])))));
                                var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)0)), (262143)));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) var_8);
                var_20 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1])) ? (-1825361329) : (((/* implicit */int) var_13))))), (max((((/* implicit */unsigned long long int) (signed char)114)), (61113007402422788ULL))))), (((/* implicit */unsigned long long int) ((min((939524096), (((/* implicit */int) (_Bool)0)))) % (min((((/* implicit */int) var_6)), (2036257482))))))));
                var_21 = ((/* implicit */int) ((signed char) max((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)46)))), (((((/* implicit */_Bool) (signed char)115)) && (((/* implicit */_Bool) arr_6 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 7; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1237704220201199769LL)) ? (((((/* implicit */_Bool) (signed char)13)) ? (-912788737) : (-754944544))) : (-1825361324)));
                            var_23 *= ((/* implicit */int) arr_21 [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                {
                    arr_30 [9] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967283U)) ? (1718602145) : (912788737)));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 12; i_11 += 3) 
                        {
                            {
                                var_24 &= ((/* implicit */unsigned long long int) (~((~(arr_32 [i_11 - 1] [i_11 - 1] [i_10 - 2] [i_10 - 2])))));
                                var_25 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-14))))) ? (arr_26 [i_7] [i_8]) : (((((/* implicit */_Bool) 754944544)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))) ? ((~(min((((/* implicit */int) var_6)), ((-2147483647 - 1)))))) : (max((((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_31 [i_7] [i_8] [i_9] [i_7] [i_7])))), (((var_11) ^ (arr_32 [i_11] [i_10] [i_9] [i_8]))))));
                                var_26 *= ((/* implicit */long long int) (~((-(0)))));
                            }
                        } 
                    } 
                    var_27 *= ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) ((int) arr_27 [i_7]))), (4923776834734715023ULL)))));
                    var_28 -= ((/* implicit */long long int) min((((((/* implicit */int) arr_27 [i_7])) | (max(((-2147483647 - 1)), (var_2))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                    var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(-1944471751)))) ? (1205355169) : (2147483647))), (((arr_32 [i_7] [i_8] [i_9] [i_7]) + (((/* implicit */int) var_7))))));
                }
            } 
        } 
    } 
}
