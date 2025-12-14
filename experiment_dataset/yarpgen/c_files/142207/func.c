/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142207
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
    var_15 = ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_10 [14U] [i_1] [(signed char)11] [14U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((367821235142464209ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */int) max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned char) (signed char)-1))))) : (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))))) ? (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!((_Bool)1)))))))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_2] [i_0] [i_0] [i_0])), (arr_6 [i_1] [i_1] [i_2] [i_2 + 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))))));
                    var_18 = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3] [i_0])) : (((arr_5 [i_0] [i_0] [i_0]) ? (arr_0 [2]) : (((/* implicit */unsigned long long int) -2147483624))))))));
            var_20 ^= ((/* implicit */unsigned short) arr_4 [i_0] [i_3]);
            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) 724776682)) / (((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18078922838567087406ULL))))), ((-(((((/* implicit */_Bool) 724776674)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            var_22 += ((/* implicit */short) arr_12 [i_0] [i_0] [i_0]);
            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_1 [i_4] [i_4]), (arr_1 [i_0] [i_4]))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_3))))) + (min((((/* implicit */long long int) var_1)), (var_6)))))) ? (((((/* implicit */_Bool) (short)-8457)) ? (5540530758109125779ULL) : (((/* implicit */unsigned long long int) ((arr_9 [i_4] [(unsigned short)14] [i_0]) + (((/* implicit */long long int) -724776675))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5))))))))));
        }
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) max((arr_16 [i_5]), ((short)16461)))))) / (((/* implicit */int) max((arr_16 [i_5]), (((/* implicit */short) var_12))))))))));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 724776675)) ? ((-(((unsigned int) arr_16 [i_5])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [14LL])) ? ((+((-2147483647 - 1)))) : ((+(2024418358))))))));
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -260773787)) | (1725714852U)))) ? (-2147483626) : ((-2147483647 - 1)))))));
        var_29 = ((/* implicit */signed char) ((((((/* implicit */int) arr_16 [i_5])) & (((/* implicit */int) arr_16 [i_5])))) - (((/* implicit */int) arr_16 [i_5]))));
        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) arr_16 [i_5]))));
    }
    for (int i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        var_31 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)65529)) ? ((+(438856076))) : (((/* implicit */int) arr_17 [i_6] [(unsigned char)24]))))));
        arr_21 [i_6] = ((/* implicit */short) arr_20 [i_6]);
    }
    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (unsigned char)135))))) ? (((/* implicit */int) (signed char)3)) : (max((((/* implicit */int) (short)0)), (var_7)))))) : (((3630420217971602400ULL) - (((/* implicit */unsigned long long int) -575943899)))))))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        for (unsigned short i_8 = 2; i_8 < 21; i_8 += 2) 
        {
            {
                arr_27 [i_7] = ((/* implicit */unsigned char) arr_23 [i_8 - 1] [i_8 - 2]);
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */unsigned long long int) 1346209816U)) : (((((6923815734780903402ULL) - (((/* implicit */unsigned long long int) 1503437996)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967282U)) ? (2147483647) : (((/* implicit */int) (_Bool)1)))))))));
                var_34 += ((/* implicit */short) (~((~(var_14)))));
            }
        } 
    } 
}
