/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112149
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) max(((+(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) min((var_10), (((/* implicit */signed char) (_Bool)0))))))))));
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_3))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) ((_Bool) -59743371))))))));
                    arr_10 [5] [5] [i_2] [i_0] = ((/* implicit */unsigned short) ((int) (_Bool)1));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            {
                arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 4; i_7 < 23; i_7 += 4) 
                        {
                            {
                                arr_24 [i_3] [i_4 - 2] [i_5] [i_4 - 2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) -59743371))) ? (((/* implicit */int) ((short) (short)26676))) : (((/* implicit */int) ((unsigned char) 59743370)))));
                                arr_25 [i_3] [i_3] [13ULL] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned short) arr_12 [i_7 - 4]));
                                var_12 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                                var_13 = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            {
                                arr_33 [i_3] [i_3] [i_4] [i_3] [i_8] [i_8] [i_9] = ((/* implicit */short) ((int) (unsigned short)24911));
                                arr_34 [i_9] [i_9] [i_8] [i_5] [(signed char)14] [i_3] = (-((-(0U))));
                            }
                        } 
                    } 
                    arr_35 [i_4 + 2] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_8)) : (var_7))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_4] [i_5] [i_5])))))) <= ((+(var_5)))));
                }
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    var_15 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [(unsigned char)20] [(unsigned char)20] [i_10] [i_10] [i_10] [i_10]))))) ? (max((14746892217317399322ULL), (3699851856392152294ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (_Bool)0)) : (59743371)))))) * ((+(arr_17 [i_4 - 1] [i_4 + 3] [i_4 - 1])))));
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_16 += ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (14746892217317399322ULL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_3] [9U] [i_3]))) : (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)224)) << (((-302005542) + (302005562)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)26508)) && (((/* implicit */_Bool) arr_32 [i_3] [i_4 - 1] [(unsigned short)19])))))));
                        arr_40 [i_11] [i_11] [i_11] [i_10] [i_3] [i_3] = ((/* implicit */signed char) max((min((((11274505730668809099ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62))))), (((/* implicit */unsigned long long int) arr_11 [i_3])))), (((/* implicit */unsigned long long int) ((arr_19 [i_3]) ^ (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)0)))))))));
                        arr_41 [i_3] [i_3] [i_10] [22ULL] = ((/* implicit */unsigned char) max(((((-(3699851856392152294ULL))) & (((/* implicit */unsigned long long int) (-(-473572278)))))), (((/* implicit */unsigned long long int) 473572297))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        var_17 += ((2852027732U) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1048576ULL)) ? (((/* implicit */int) (short)-4784)) : (((/* implicit */int) (short)28900))))));
                        arr_46 [i_3] [i_4 + 1] [(short)22] [i_12] [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_32 [i_3] [i_3] [i_12])) > (((/* implicit */int) arr_42 [i_3] [i_4] [i_10] [i_12] [i_4 + 3] [i_3])))))));
                    }
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -473572278)), (3994932261U)))) ? ((+(((unsigned long long int) arr_15 [i_3])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)33859))))))))));
                }
                for (unsigned long long int i_13 = 1; i_13 < 23; i_13 += 2) 
                {
                    arr_51 [i_13] [i_3] [i_4 + 3] [i_13 - 1] = ((/* implicit */unsigned int) ((((((arr_20 [i_3] [i_3] [i_13 - 1] [i_13]) & (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) >> (((((/* implicit */int) ((unsigned short) arr_29 [i_3] [(signed char)10] [i_13] [i_4] [i_3] [i_3] [i_3]))) - (46760))))) == (((/* implicit */unsigned int) (+(arr_37 [i_4 + 2] [i_4 - 1] [i_13 + 1] [i_13]))))));
                    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((18446744073708503039ULL), (((/* implicit */unsigned long long int) 1844699050))))))) | (((10235923843033318345ULL) & (((/* implicit */unsigned long long int) 1844699050))))));
                    arr_52 [i_13] [i_4] [i_13 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((((/* implicit */_Bool) (unsigned short)180)) && (((/* implicit */_Bool) 70368742080512LL)))) ? (18446744073709551612ULL) : (((((/* implicit */unsigned long long int) 1844699050)) & (1048550ULL))))) : (((/* implicit */unsigned long long int) arr_20 [i_3] [i_3] [i_4] [i_13 + 1]))));
                    var_20 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) ((((-3092542312024637050LL) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)6))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (arr_26 [i_3] [i_4] [(unsigned short)8] [i_13]))))));
                }
            }
        } 
    } 
}
