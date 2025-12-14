/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121100
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
    var_14 = ((/* implicit */short) (((-(((((/* implicit */_Bool) (unsigned short)42349)) ? (2323474647U) : (3482705831U))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8))))));
    var_15 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) (short)30478))), (((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)31647))))))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 2323474647U)) ? (812261449U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) 812261437U)) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-99)), ((short)9042)))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1])) != (((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */int) var_4))));
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) 3482705831U);
        }
        for (short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_8 [i_0] [i_2] = arr_1 [i_0];
            var_17 = ((/* implicit */unsigned char) max((var_17), (((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526))) + (var_5))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-9042)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) -1817143174)))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) / (4294967295U)))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */long long int) 1971492629U)) / (((long long int) (unsigned short)9)))) << (((/* implicit */int) ((((/* implicit */unsigned int) min((1214563138), (((/* implicit */int) arr_1 [i_2]))))) <= (2323474642U)))))))));
        }
        arr_10 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-32320))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_1 [i_0]))));
    }
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (signed char)-47);
                    var_22 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_4] [i_4])) ? (((var_1) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))))));
                    var_23 = ((/* implicit */short) 3482705847U);
                    /* LoopSeq 2 */
                    for (signed char i_6 = 2; i_6 < 8; i_6 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) arr_14 [i_3] [i_3]);
                        arr_20 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4128768U)) % (arr_15 [i_6 + 3] [i_6 - 1] [i_6] [i_6 - 2])));
                        var_25 = ((/* implicit */_Bool) arr_11 [i_3] [i_3]);
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_17 [i_6 - 1] [i_6] [i_5] [i_6 + 4]), (((/* implicit */unsigned char) arr_19 [i_6] [i_6 + 2] [i_6] [i_6] [i_6 - 2] [i_6 + 3]))))) >= ((+(((/* implicit */int) arr_17 [i_6 - 2] [i_6 + 4] [i_5] [i_6 + 4]))))));
                    }
                    for (signed char i_7 = 2; i_7 < 8; i_7 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_3] [i_3] [i_4] [i_4] [i_7] [0U]))))) ? (((arr_18 [i_5] [i_4] [i_7] [i_3]) ? (((/* implicit */int) arr_18 [i_5] [i_5] [i_5] [3U])) : (((/* implicit */int) arr_18 [i_5] [i_5] [i_5] [i_7])))) : (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)14315))))))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)106)))))))));
                    }
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-30474))));
                }
            } 
        } 
    } 
}
