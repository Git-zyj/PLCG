/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128165
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
    var_19 = ((/* implicit */short) (~(max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) var_11))))));
    var_20 = ((((/* implicit */_Bool) max((((var_12) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((signed char) ((int) (signed char)-37)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned char) -1562848969))) : (((((/* implicit */int) var_3)) / (((/* implicit */int) (signed char)64)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 2])) <= (((/* implicit */int) ((signed char) arr_4 [i_0] [i_1])))))), (-1562848959)));
                var_22 |= ((/* implicit */short) ((_Bool) min((((/* implicit */short) ((signed char) var_16))), (min((arr_0 [i_0] [i_0]), (((/* implicit */short) arr_2 [i_0] [i_1])))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)64)) && (((/* implicit */_Bool) arr_3 [i_0 - 2] [11LL]))))), (((((/* implicit */_Bool) -1562848969)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11556))))))));
                    var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((min((((/* implicit */int) var_6)), (-1562848969))), (min((-1562848969), (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))))), ((+(max((4294967295U), (((/* implicit */unsigned int) var_5))))))));
                    var_25 = ((/* implicit */long long int) (unsigned short)29);
                    arr_8 [3U] [i_2] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_2]))))), (max((var_6), (arr_2 [i_0 + 1] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)32736)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0 - 2] = ((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned short)65532)));
                                arr_16 [i_3] [1ULL] [0ULL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((-4367681733418580105LL), (((/* implicit */long long int) var_14))))))) && (((/* implicit */_Bool) max((((/* implicit */short) arr_2 [i_0 - 2] [i_1])), ((short)32767))))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) (signed char)-29);
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_24 [4ULL] [4ULL] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-46)) : (-1562848959)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_22 [i_7] [i_7] [(unsigned short)3] [i_6] [i_7 - 1])))))));
                                var_28 = ((/* implicit */signed char) (+(((/* implicit */int) max(((short)(-32767 - 1)), (arr_6 [i_7 - 1] [i_0 - 2]))))));
                                var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))));
                                arr_25 [i_0] [7ULL] [i_5] [i_7] [0LL] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1562848978)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 35993612646875136ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_12 [i_7 + 1] [i_1] [i_5])))) ? (((/* implicit */long long int) min((-1186933755), (-1562848969)))) : (arr_12 [i_0] [i_0 + 1] [i_6]))) : (((/* implicit */long long int) max((((/* implicit */int) min((arr_1 [i_7]), (((/* implicit */unsigned char) (_Bool)1))))), (max((1562848961), (((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                    var_30 = (short)5046;
                    var_31 = ((/* implicit */_Bool) var_10);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        arr_28 [6] = ((/* implicit */unsigned long long int) var_3);
        var_32 |= ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) (unsigned short)39880)) ? (((/* implicit */int) arr_26 [i_8])) : (((/* implicit */int) (signed char)-104)))))) << (((((/* implicit */_Bool) (unsigned short)1088)) ? (((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) (unsigned char)0)) : (arr_27 [i_8]))) : (max((arr_27 [i_8]), (1562848961)))))));
        var_33 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-804)) + (((((/* implicit */int) (unsigned char)2)) ^ (((/* implicit */int) (short)-9495)))))) < (arr_27 [i_8])));
    }
}
