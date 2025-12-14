/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118809
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
    var_20 += ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */short) var_9);
        arr_2 [i_0] = ((/* implicit */short) ((((638079006U) << (((arr_1 [8ULL]) - (602052694U))))) >> (((max((((/* implicit */int) var_16)), (arr_0 [i_0]))) - (944498074)))));
        var_22 = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_18);
            var_23 |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_0] [i_1]))));
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_1]);
        }
        var_24 = ((/* implicit */short) 2001054228);
    }
    for (unsigned short i_2 = 4; i_2 < 21; i_2 += 2) 
    {
        arr_9 [i_2 - 4] = ((/* implicit */_Bool) arr_3 [i_2] [i_2 - 2]);
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)30951)))) | (((((/* implicit */_Bool) var_16)) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 3656888276U)) ? (((/* implicit */int) arr_14 [i_6] [i_5 + 4] [i_3])) : (((/* implicit */int) var_14)))))))))));
                                arr_20 [i_6] [i_4] [i_3] = (-(((/* implicit */int) ((signed char) (_Bool)1))));
                                arr_21 [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_16)), ((~(((/* implicit */int) arr_11 [i_2 - 1] [i_4]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned short) 638079025U);
                                arr_28 [i_2] [i_3] [i_4] [i_7] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_13 [i_2 - 1] [i_2 + 1] [i_2]), (arr_13 [i_2 - 4] [i_2 - 3] [i_2]))))));
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_7] [i_3])) ? (((/* implicit */int) arr_27 [i_2 - 4] [i_2 - 4] [i_4] [i_2 - 4] [i_8] [i_2 - 4])) : (((/* implicit */int) var_19))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_4] [i_8])) && (((/* implicit */_Bool) arr_27 [i_8] [i_7] [i_4] [i_3] [i_3] [i_2]))))) : (((/* implicit */int) (unsigned char)168))))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))))), (3656888276U))) : (((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)-101)) % (((/* implicit */int) var_4)))), (((((/* implicit */int) (short)-32752)) | (((/* implicit */int) (short)23039))))))))))));
                            }
                        } 
                    } 
                    var_28 = max((3656888283U), (((/* implicit */unsigned int) (signed char)-125)));
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((_Bool) -3548101713087276557LL))))))))));
                    arr_29 [i_4] [(short)7] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
        arr_30 [i_2] [i_2] = ((/* implicit */unsigned int) ((long long int) var_19));
        var_30 += ((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_2] [(unsigned short)22] [(_Bool)1]))) > (638079008U))));
    }
    var_31 = ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (3656888288U))))))) % ((+((~(((/* implicit */int) var_15)))))));
}
