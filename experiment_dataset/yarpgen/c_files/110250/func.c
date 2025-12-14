/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110250
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)127)))))) | (((/* implicit */int) (short)-32753))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) << (((((/* implicit */int) (short)-4714)) + (4725)))))))) || (((/* implicit */_Bool) max((max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) arr_3 [i_1 - 2])))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)233))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                var_12 = ((/* implicit */int) (+(min((((/* implicit */long long int) (short)-30898)), (7668172515422917782LL)))));
                var_13 = (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (unsigned short)32996)) : (((/* implicit */int) (unsigned short)1048))))), (min((6915505807853492329LL), (((/* implicit */long long int) var_3)))))));
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)31908)) ? (((/* implicit */int) arr_9 [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_2] [i_2])))), (((/* implicit */int) arr_1 [i_2] [i_2]))))) ? (min((arr_10 [i_2] [i_2] [i_3]), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))) : (arr_0 [i_2] [12])))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                arr_13 [i_2] [(unsigned short)3] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), ((~((-(((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            {
                arr_22 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_5])) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_4] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_4] [4U]), (arr_15 [i_4] [i_5]))))) : (((unsigned int) (unsigned short)65535))));
                var_14 = ((/* implicit */short) min((((/* implicit */long long int) min((arr_19 [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) arr_21 [i_4] [(signed char)8]))))), ((+(3247888765090555629LL)))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    for (long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3247888765090555627LL)))))) + ((-(18446744073709551604ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) (unsigned short)32517)) : (((/* implicit */int) (unsigned char)255))))) / (var_10))))));
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_4] [i_5] [(_Bool)1])) ? (((/* implicit */int) (short)-3936)) : (((((/* implicit */int) arr_20 [(signed char)4] [i_7])) % (((/* implicit */int) (unsigned short)65535))))))) < ((-(min((((/* implicit */long long int) arr_29 [i_7] [(unsigned char)11] [(unsigned char)11])), (-5072533906107019064LL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
