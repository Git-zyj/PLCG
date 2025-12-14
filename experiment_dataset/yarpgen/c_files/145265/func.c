/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145265
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
    var_17 = ((/* implicit */unsigned int) max((1126282287), (((/* implicit */int) (signed char)89))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) (-(arr_0 [i_0 - 2] [i_0 + 1])));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967284U)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89)))))) ? (max((arr_2 [i_0 + 1]), (((/* implicit */unsigned int) arr_1 [i_0 + 2])))) : (arr_2 [i_0 - 2]));
        var_20 = ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (4294967273U))) / ((~(arr_2 [i_0 - 2])))));
    }
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_1] [i_1 - 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned char)181)))))) : (((unsigned int) (signed char)89)))))));
        var_22 += max((arr_6 [i_1]), (((((/* implicit */_Bool) arr_4 [i_1 - 3])) ? (arr_3 [i_1 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) >> (((max((4294967284U), (((/* implicit */unsigned int) (signed char)-77)))) - (4294967270U)))))) ? (((var_8) - (((/* implicit */unsigned long long int) max((4294967284U), (((/* implicit */unsigned int) var_16))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        for (unsigned int i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned char)2])))))) | (max((2776669590U), (((/* implicit */unsigned int) 2145500706))))))));
                arr_14 [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) arr_10 [i_2 - 1])) : (var_5)))));
                arr_15 [i_3] [i_3] [i_2] = (~(((unsigned int) (+(((/* implicit */int) arr_10 [i_2]))))));
                /* LoopSeq 1 */
                for (long long int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    arr_19 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (+(824039014U)));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22902))) <= (((unsigned int) (signed char)87)))) ? ((-(((/* implicit */int) arr_21 [i_3])))) : (((((/* implicit */_Bool) -780234678)) ? (((/* implicit */int) arr_8 [i_4 - 1] [i_3 - 1])) : (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_0)))))))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((max((4503794354759607792LL), (((/* implicit */long long int) (signed char)121)))), (((/* implicit */long long int) (unsigned short)0)))))));
                        arr_22 [i_2] [i_3 + 1] [i_4] [i_4] [i_5] [i_3] = ((/* implicit */unsigned char) (-((+(780234678)))));
                        var_27 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (short)10538))))) >= (3532302938260900531LL))))));
                        arr_23 [i_2] [i_3 - 2] [i_4] [i_3] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_4 - 1])) ? (arr_9 [i_3 + 1] [i_4 - 1]) : (arr_9 [i_3 + 1] [i_4 - 1]))));
                    }
                    for (unsigned int i_6 = 3; i_6 < 17; i_6 += 4) 
                    {
                        arr_27 [i_2] [i_2] [i_4] [i_3] [i_6 - 2] = ((/* implicit */unsigned char) arr_7 [i_2]);
                        var_28 = ((/* implicit */unsigned int) (+(((((((/* implicit */int) var_16)) - (((/* implicit */int) (short)9036)))) + (((/* implicit */int) (unsigned char)127))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            arr_30 [i_2] [i_3] [i_2] [i_6] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) (-(var_12)));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) max((((/* implicit */long long int) (~((~(((/* implicit */int) arr_1 [i_2 - 1]))))))), (max((((/* implicit */long long int) arr_26 [i_7] [i_6 + 1] [i_4] [i_2 - 1] [i_2 - 1])), (arr_18 [i_2 + 1] [i_3 - 1] [i_4 + 1] [i_3]))))))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) != (arr_13 [i_3])));
                    }
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_4 - 2])) : (((/* implicit */int) (signed char)-77))))), (((((/* implicit */_Bool) arr_29 [i_3 - 1] [i_2 + 1])) ? (arr_29 [i_3 + 1] [i_2 + 1]) : (arr_29 [i_3 - 1] [i_2 - 1]))))))));
                    var_32 -= ((/* implicit */signed char) var_6);
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-69)) | (((/* implicit */int) (short)19374))))) ? (max((var_3), (((/* implicit */long long int) (short)10533)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))))))));
                }
            }
        } 
    } 
}
