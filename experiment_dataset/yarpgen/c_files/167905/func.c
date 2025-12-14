/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167905
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_11)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (unsigned char)18))))) >= (((/* implicit */int) (unsigned char)235))))))))));
    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) var_11)))))) == (((/* implicit */int) var_2))));
    var_14 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_1)))) < (((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [i_0 - 1] [i_2 - 1])), (var_4)))) ? (max((((/* implicit */int) max(((unsigned char)235), ((unsigned char)235)))), (((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_2] [(unsigned short)6] [i_2] [i_3])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3])) : (((/* implicit */int) (unsigned short)39993)))))) : (((((/* implicit */int) (unsigned char)18)) >> (((((/* implicit */int) var_8)) - (14)))))));
                            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_7 [i_2 - 1] [i_0 - 1]) : (var_9)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)35)) != (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_11))))))) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [10U]))) + (964485692U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) || (arr_1 [i_0]))))))))));
                            arr_13 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3234631072U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_2 - 1]))) | (arr_11 [i_2] [(_Bool)1] [i_2 - 1] [i_2])))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_11 [i_3] [i_1] [i_3] [i_2]), (((/* implicit */unsigned long long int) arr_2 [1U]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))) | (arr_5 [(unsigned short)10] [i_3] [i_2] [14ULL]))) : (4294967282U))) > (((((/* implicit */_Bool) (unsigned short)39998)) ? (arr_7 [i_0 - 1] [i_2 - 1]) : (arr_7 [i_0 + 3] [i_2 - 1]))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_7 [i_0 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))) : (((arr_6 [i_1]) + (((/* implicit */unsigned long long int) var_9))))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned short)3853)) : (((/* implicit */int) (signed char)(-127 - 1)))))) || (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) (signed char)-29))))));
            }
        } 
    } 
}
