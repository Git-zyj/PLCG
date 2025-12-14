/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115093
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
    var_12 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) / (var_9))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [19U] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) var_5)))) >= ((+(((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))))));
                var_13 = min((max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_3 [i_1])))), (((((/* implicit */_Bool) (signed char)-1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))), ((+(arr_2 [i_1] [i_1 + 1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_14 += ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) != (((/* implicit */int) min(((signed char)-4), (var_10)))))) ? (((((/* implicit */_Bool) arr_14 [(unsigned char)2] [i_3 - 1] [(_Bool)1])) ? (arr_14 [i_2] [i_3 + 1] [i_2]) : (arr_14 [i_4] [i_3 - 1] [i_4]))) : (var_8)));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_10 [i_2] [i_3 + 1] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_4])))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) arr_1 [i_3]))) - (3460)))))) ? (((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) (signed char)3))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) var_3)) : (var_9))))) : (((/* implicit */unsigned long long int) ((unsigned int) -2518615441787852914LL))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((+(var_8))) : (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_7)))))))) && (((((/* implicit */int) ((((/* implicit */int) (unsigned short)14462)) >= (-1330697639)))) == (((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (var_2))))))));
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) max((((((/* implicit */_Bool) arr_3 [i_5 + 1])) && (((/* implicit */_Bool) var_9)))), (((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5])))))))) & (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) ^ (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_10)) | (((/* implicit */int) var_6)))) : (((/* implicit */int) ((short) (short)(-32767 - 1))))))));
    }
}
