/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161646
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (-(((arr_3 [i_0] [i_1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65518)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-10618))))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-3872762811600817056LL) > (var_2)))))))));
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (arr_3 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (arr_3 [i_0] [(unsigned char)13] [i_1]) : (arr_3 [i_0] [i_0] [i_0])))))) ? ((-(((unsigned int) arr_3 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) arr_1 [i_0]))))));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    arr_8 [i_0] [(unsigned char)13] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)110);
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_7), (((((/* implicit */_Bool) 13331490931881434292ULL)) ? (var_8) : (((/* implicit */long long int) 340956547U))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */int) (unsigned short)26306)) : (((/* implicit */int) (signed char)-19)))))));
                }
                for (unsigned char i_3 = 3; i_3 < 22; i_3 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned char)133)) * (((/* implicit */int) (short)28632)))));
                    var_19 = ((/* implicit */signed char) ((max((((arr_10 [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28651))))), (3176681193089987274ULL))) | (((/* implicit */unsigned long long int) max((((1149376560U) + (arr_11 [(unsigned char)2] [i_0] [i_3]))), (((arr_0 [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) % (arr_0 [i_0] [i_0])))) % (((long long int) (unsigned char)22)))) <= (min((((3872762811600817064LL) << (((((/* implicit */int) (unsigned short)50794)) - (50793))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (short)-31120)) : (var_14))))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */short) 1889794311);
    /* LoopNest 3 */
    for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) 
    {
        for (int i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((3872762811600817055LL), (((/* implicit */long long int) (unsigned char)89))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))) : (arr_3 [(unsigned char)9] [i_5 - 1] [(unsigned char)9])))) : (((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4]))))))) - (var_8)));
                    arr_18 [i_4] [i_5 - 2] [i_6] = ((/* implicit */unsigned char) min(((signed char)-15), (((/* implicit */signed char) ((max((2040701019254800589ULL), (((/* implicit */unsigned long long int) arr_6 [i_4] [i_5 - 2] [i_6])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */long long int) arr_1 [i_4])) : (-236101048843448222LL)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_14))))), (((unsigned int) var_9))))));
}
