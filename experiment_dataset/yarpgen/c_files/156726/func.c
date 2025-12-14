/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156726
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_1 - 2])))), (((((/* implicit */int) arr_1 [i_1 - 2])) | (((/* implicit */int) (short)-19986))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) 797795907))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : ((~(arr_4 [i_0] [13U] [i_0])))));
                    var_18 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (var_3))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        {
                            var_19 *= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_15 [4LL] [i_4] [i_4])) ? (arr_15 [(signed char)0] [i_5] [i_6]) : (1269591670))));
                            arr_19 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */signed char) var_1);
                            arr_20 [i_3] [i_3] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_0 [i_3] [5ULL])))), (((/* implicit */int) ((unsigned short) var_4)))));
                            var_20 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_8 [(_Bool)1] [i_5]) : (arr_8 [0] [i_6]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (unsigned int i_8 = 3; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned int) arr_0 [i_3] [i_3]);
                            var_22 = ((/* implicit */_Bool) var_7);
                            var_23 = ((((/* implicit */_Bool) 797795903)) ? (-797795903) : (((/* implicit */int) min(((unsigned short)9950), (((/* implicit */unsigned short) (unsigned char)4))))));
                        }
                    } 
                } 
                arr_28 [i_3] = ((/* implicit */_Bool) (~(((arr_22 [i_4] [i_3] [i_3]) & (arr_22 [i_3] [i_3] [i_4])))));
                arr_29 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_4] [i_3])) ? (min((((/* implicit */unsigned long long int) (short)-19985)), (((((/* implicit */_Bool) (unsigned char)158)) ? (9823253974483777565ULL) : (((/* implicit */unsigned long long int) 797795907)))))) : (var_16)));
            }
        } 
    } 
    var_24 = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (unsigned char)8)) * (((/* implicit */int) var_13)))) : (min((((/* implicit */int) max(((unsigned char)60), (((/* implicit */unsigned char) (signed char)62))))), (((((/* implicit */_Bool) 5674996025025278716ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))));
    var_25 = var_1;
}
