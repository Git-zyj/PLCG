/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148617
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
    var_20 = ((/* implicit */int) ((short) -2669592821325692511LL));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) > (((/* implicit */int) (unsigned char)255))))) | (((/* implicit */int) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) arr_1 [i_0]))))) || (((/* implicit */_Bool) 7LL))))));
        arr_3 [i_0] = (unsigned char)148;
        var_21 *= ((/* implicit */signed char) (unsigned short)46548);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned short)65524))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2])) : (-2028941578842846596LL))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (((+(482263674337763775LL))) % (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_9 [i_3] [i_0] [i_2] [i_3])))))))))))));
                                arr_15 [i_0] [i_1] [i_2] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned char)7]))) & (8505346931847332956ULL))))) > (((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_4]), (((((/* implicit */int) arr_12 [i_4] [i_4])) * (((/* implicit */int) arr_13 [i_0] [i_0])))))))));
                                var_23 |= ((/* implicit */signed char) ((482263674337763775LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108)))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)18))))) / (max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0])), (-8685089960169935716LL)))));
                }
            } 
        } 
        var_24 ^= ((/* implicit */unsigned short) -1);
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            for (signed char i_7 = 3; i_7 < 12; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    {
                        var_25 = ((/* implicit */long long int) ((max((((/* implicit */long long int) 77581244)), (((((/* implicit */_Bool) 8822402754529858362ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) : (arr_21 [i_6]))))) > (((((long long int) 1302510236U)) | (arr_21 [i_6])))));
                        var_26 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)510)) / (((/* implicit */int) (_Bool)1))))) : (arr_18 [i_6 - 1] [i_7 - 3])))));
                    }
                } 
            } 
        } 
        var_27 ^= ((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [(unsigned char)3] [i_5]);
    }
}
