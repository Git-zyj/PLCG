/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111288
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
    var_18 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)38111)) ? (2139434393) : (((/* implicit */int) (short)32767)))));
    var_19 -= ((/* implicit */unsigned short) (unsigned char)252);
    var_20 -= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-55)), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_8)))))) : ((~(2767087174U))))));
    var_21 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) max((((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) var_11))))), (var_2)))), (min(((unsigned short)62431), (((/* implicit */unsigned short) (unsigned char)125))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-50))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)191))))), ((short)-946))))) : (min((((((/* implicit */long long int) 431751181U)) | (6917529027641081856LL))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)68))))))))))));
                        var_23 = ((/* implicit */_Bool) (+((((-(((/* implicit */int) (_Bool)1)))) - (((((/* implicit */_Bool) 3327521707U)) ? (((/* implicit */int) (short)24624)) : (((/* implicit */int) (unsigned char)56))))))));
                        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)5] [i_0] [i_0]))));
                    }
                    for (short i_4 = 2; i_4 < 8; i_4 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)-2355)), ((+(431751204U)))));
                        arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_2 - 2]))));
                        var_26 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_9 [i_1] [8U] [i_1] [i_4])))) ? (((/* implicit */int) (unsigned short)48)) : (((/* implicit */int) arr_11 [i_0] [i_4 - 2] [i_2 - 2] [i_4]))))), (max((arr_8 [i_0] [i_4 - 2] [7U] [4U]), (((/* implicit */unsigned int) arr_11 [i_0] [i_4 - 2] [i_4] [i_0]))))));
                    }
                    for (short i_5 = 2; i_5 < 8; i_5 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_0] [i_2 + 1] [i_5 + 1] [i_2 + 1] [i_5] [i_5]))))), (((unsigned int) arr_17 [i_0] [i_2 - 2] [i_5 - 1] [i_2 - 2] [i_2 - 2] [i_5]))));
                        var_28 = ((/* implicit */unsigned char) 1637564011U);
                        var_29 *= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) ((_Bool) (unsigned char)13))) % (((/* implicit */int) ((((/* implicit */int) (short)29640)) != (((/* implicit */int) (unsigned char)192)))))))));
                    }
                    arr_18 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (unsigned short)3384);
                    var_30 = ((/* implicit */short) arr_11 [i_0] [8U] [i_2 + 1] [8U]);
                }
            } 
        } 
    } 
}
