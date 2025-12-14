/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126847
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1944119421120984922LL)) ? (((/* implicit */int) (unsigned short)42765)) : (((int) -357535852))));
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) min(((unsigned short)22770), ((unsigned short)42754)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)6704))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_17 ^= ((/* implicit */unsigned short) ((int) (short)-30996));
                        arr_11 [i_3] [i_1] [i_3] [8U] [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((signed char) ((short) (unsigned short)34848))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */short) ((signed char) 1607258018U));
                        arr_14 [(unsigned short)4] [i_1] [i_0] = ((/* implicit */unsigned short) -1);
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) 1534660841);
                        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) 4294967295U)))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_1] [i_6] [4U] &= ((/* implicit */unsigned short) (!(((_Bool) (unsigned short)37450))));
                        var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (-17) : (((/* implicit */int) (unsigned short)32768))))));
                        arr_20 [i_0] [i_1] [4U] [4U] = ((/* implicit */int) ((short) (+(2009444521U))));
                    }
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) ((unsigned short) (signed char)89))))));
                        var_23 = ((/* implicit */unsigned int) ((short) (-(3875539820U))));
                        arr_23 [i_2] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)30))));
                    }
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) 4294967286U);
                        arr_26 [i_0] [i_1] [1LL] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((unsigned char) (short)31442))), (((unsigned short) (+(419427477U))))));
                        arr_27 [i_0] [i_8] [i_0] [i_8] = ((/* implicit */_Bool) ((unsigned short) (~(1502093131))));
                        var_25 ^= ((_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) 1231104482)) : (1607258025U)));
                        var_26 = ((/* implicit */int) ((unsigned int) ((int) ((int) 419427497U))));
                    }
                }
            } 
        } 
    } 
}
