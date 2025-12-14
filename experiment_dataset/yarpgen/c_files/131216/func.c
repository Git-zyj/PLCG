/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131216
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_6))))))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [(unsigned short)5] [i_0]))) == (1236072476U)))), (((2305843008139952128ULL) & (arr_6 [i_0])))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_5 [(short)5] [(short)5] [i_0])) : (((((/* implicit */_Bool) 16138248336114078639ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_16)))))), ((~(((/* implicit */int) (_Bool)1))))));
                    var_18 = ((/* implicit */short) min((((((((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_2] [i_2])) ^ (((/* implicit */int) arr_5 [i_0 - 2] [i_1] [i_0])))) ^ (((/* implicit */int) (signed char)-109)))), (((((/* implicit */int) (short)17226)) >> ((((+(((/* implicit */int) (unsigned char)86)))) - (63)))))));
                }
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned long long int) 1236072467U)), (var_10))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) < (1450741236850324861ULL))))) + (arr_6 [i_0])))));
                    arr_11 [i_0] = ((((((((/* implicit */int) arr_10 [i_0])) % (((/* implicit */int) var_6)))) < (((((/* implicit */int) (short)24158)) ^ (((/* implicit */int) arr_10 [i_0])))))) ? (((((/* implicit */_Bool) max(((unsigned char)66), (((/* implicit */unsigned char) (signed char)-51))))) ? (((((/* implicit */_Bool) 14973045129823772085ULL)) ? (8004741523449756208ULL) : (17381254903519055398ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0])), (arr_10 [i_0]))))))) : (min((min((((/* implicit */unsigned long long int) var_7)), (arr_6 [i_0]))), (((8577198643606728391ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))));
                    arr_12 [i_0] [(_Bool)1] [4ULL] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255))))), (min((16492674416640ULL), (((/* implicit */unsigned long long int) (unsigned char)171)))))), (((/* implicit */unsigned long long int) var_5))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_11)), (var_7))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (min((arr_9 [10ULL] [10ULL] [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(unsigned char)6])) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) arr_4 [(signed char)8]))))))))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) + (((/* implicit */int) arr_10 [i_0]))))), (min((((/* implicit */unsigned int) arr_10 [i_0])), (var_15)))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [i_4])))))) % (arr_9 [i_0] [i_0] [i_0])))));
                }
                arr_15 [i_0] [i_0] = ((/* implicit */signed char) var_10);
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [2ULL] [2ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22671))) : (arr_9 [i_0] [i_1] [(unsigned short)0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [6ULL] [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16))))) & (((((/* implicit */_Bool) var_13)) ? (16753621415682468353ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
    var_24 = max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65534)) | (((/* implicit */int) (short)12378))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_9))))) : (var_7)))));
}
