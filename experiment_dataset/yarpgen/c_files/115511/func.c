/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115511
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0]))) <= (arr_0 [(short)5]))) ? ((-(((((/* implicit */int) (short)27152)) | (((/* implicit */int) var_2)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)148))))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned short) min((max((max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)103)))))), (min((arr_0 [i_1]), (((/* implicit */long long int) var_3))))));
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) 1674859663)), (arr_1 [21ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_0)), (var_6))))) : (((var_0) ? (arr_0 [i_1]) : (((/* implicit */long long int) -2147483645)))))), (arr_2 [i_0] [i_0]))))));
        }
        var_13 = min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)37899))))), (max((min((arr_0 [i_0]), (((/* implicit */long long int) (unsigned char)100)))), (((/* implicit */long long int) max((4126138530U), (((/* implicit */unsigned int) -1674859663))))))));
        var_14 = arr_2 [i_0] [(short)22];
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */long long int) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) min(((unsigned char)107), (((/* implicit */unsigned char) arr_7 [i_2])))))))) : (max((((((/* implicit */_Bool) arr_0 [14ULL])) ? (((/* implicit */long long int) arr_1 [i_2])) : (arr_0 [i_2]))), (((/* implicit */long long int) var_9))))));
        var_15 = ((/* implicit */long long int) ((((max((((/* implicit */unsigned int) (unsigned char)93)), (arr_1 [(unsigned short)20]))) >> (((min((((/* implicit */int) (unsigned char)112)), (arr_3 [i_2]))) - (83))))) <= (var_5)));
        var_16 = ((/* implicit */int) min((max((arr_1 [i_2]), (((/* implicit */unsigned int) min((var_1), ((unsigned char)108)))))), (((/* implicit */unsigned int) (short)27152))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28656))) : (arr_1 [i_2]))), (((arr_5 [i_2]) & (arr_1 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_17 = (~(((/* implicit */int) (unsigned short)0)));
        var_18 = ((/* implicit */short) max((((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) max(((unsigned char)103), ((unsigned char)103))))))), (((((/* implicit */int) (short)-32765)) ^ (((/* implicit */int) arr_11 [i_3] [i_3]))))));
        arr_13 [i_3] = ((/* implicit */unsigned char) 140737488355327ULL);
        var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)-27152)) ^ (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32744))) : (((((/* implicit */_Bool) (short)-32744)) ? (arr_12 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32738))))))), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (arr_2 [i_3] [i_3])))), (arr_3 [i_3]))))));
        var_20 |= ((/* implicit */unsigned char) (short)(-32767 - 1));
    }
    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((min((-910304672), (((/* implicit */int) var_1)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) : (1517859327052465390ULL))) - (72ULL)))))) : (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)162)))))))));
    var_22 += ((/* implicit */short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_2))));
    var_23 = ((/* implicit */long long int) max((((var_0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((var_3), ((unsigned char)148)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)162))))) : ((-(((/* implicit */int) var_6))))))));
}
