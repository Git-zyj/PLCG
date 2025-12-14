/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18281
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2] [i_1]);
                    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)183))));
                }
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) /* same iter space */
                {
                    arr_9 [(_Bool)1] [(_Bool)1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1177107937)) ? (max((3584801850629389042ULL), (3584801850629389042ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)244)))))));
                    arr_10 [i_3] [i_3] [i_1] [(short)1] = ((/* implicit */_Bool) ((min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_3] [i_3 - 1] [i_1] [i_0])) != (((/* implicit */int) var_12))))), ((+(((/* implicit */int) arr_7 [i_3 - 1] [i_0])))))) | (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned short i_4 = 1; i_4 < 12; i_4 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? ((+(min((var_11), (((/* implicit */unsigned long long int) var_0)))))) : (((((unsigned long long int) arr_0 [i_1])) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                                var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_4] [i_4 - 1])) ? (2049748456U) : (arr_13 [i_1 - 3] [i_4] [i_4 + 1])))), (1892577208363237852ULL)));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) arr_7 [i_0] [i_1]))))))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_1 - 2] [i_4] [i_4] [i_4]))) : (var_11)))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-119)) * (((/* implicit */int) (signed char)-67))))) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_7] [i_4] [2U] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_18 [i_0] [(short)12] [i_4 - 1] [i_0] [i_7] [i_8]))))) ? (((/* implicit */int) max((arr_14 [i_0] [i_7] [i_4 - 1] [i_7]), (((/* implicit */short) var_7))))) : (((((/* implicit */int) arr_18 [i_0] [i_0] [i_4 + 1] [i_7] [i_8] [i_8])) << (((((/* implicit */int) (signed char)-3)) + (13)))))));
                                var_25 = max((((((/* implicit */_Bool) arr_14 [i_1] [i_1 + 2] [(unsigned char)9] [4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_15))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_0] [i_1 + 2] [i_0] [i_8]))))));
                                var_26 = ((((/* implicit */_Bool) min((arr_5 [i_0]), (((/* implicit */short) ((((/* implicit */int) var_14)) == (((/* implicit */int) (short)6577)))))))) ? (((/* implicit */int) arr_25 [7ULL] [i_1] [(signed char)12] [i_7] [i_8] [i_0] [i_7])) : (((((/* implicit */_Bool) ((short) (signed char)56))) ? (((/* implicit */int) ((var_9) < (((/* implicit */int) (signed char)-126))))) : (((((/* implicit */int) var_0)) | (((/* implicit */int) (short)6632)))))));
                                var_27 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (unsigned short)65534)) ? (4271534890793956349ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_7 [i_0] [i_1]))))))))) ? (-1177107938) : ((+(min((((/* implicit */int) (_Bool)1)), (-1177107938)))))));
                            }
                        } 
                    } 
                }
                var_28 += ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_12 [7U] [i_1 - 3] [i_0])), (min((((/* implicit */unsigned short) arr_12 [(signed char)9] [i_1 - 2] [(signed char)12])), (var_4)))));
            }
        } 
    } 
    var_29 -= ((/* implicit */unsigned short) (signed char)-22);
}
