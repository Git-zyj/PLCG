/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170779
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
    for (int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_11 -= ((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)-24))))));
        arr_2 [i_0 - 3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8720697391342010651ULL)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (18446744073709551613ULL) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))))) > (min((((((/* implicit */_Bool) (unsigned short)46885)) ? (arr_0 [i_0] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)65535)), (461727851))))))));
    }
    for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        arr_5 [i_1 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)30128)) ? (max((((/* implicit */long long int) (signed char)127)), (arr_4 [i_1 - 2] [i_1]))) : (((/* implicit */long long int) (+(2147483647)))))) & (((((/* implicit */_Bool) (~(arr_4 [i_1] [i_1 + 1])))) ? (min((arr_4 [i_1] [i_1 - 2]), (((/* implicit */long long int) (signed char)24)))) : (((/* implicit */long long int) 762636150))))));
        var_12 = ((/* implicit */unsigned short) arr_1 [i_1 + 1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-125)), (2448005383481958703ULL)))) ? (((/* implicit */int) (unsigned short)42285)) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2]))))));
            arr_10 [i_1] = (~(((/* implicit */int) arr_7 [i_2 - 2])));
        }
    }
    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)28672)) & ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) 0)) : (((6803131960271168205ULL) - (((/* implicit */unsigned long long int) arr_4 [i_3 + 1] [i_3 + 1]))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) (signed char)116)) / (((/* implicit */int) (signed char)70)))))));
        var_15 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_3 + 2] [i_3 + 1])) <= (((((/* implicit */_Bool) (signed char)-71)) ? (9006099743113216ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))))))))));
    }
    var_16 = ((/* implicit */signed char) ((((971370852035914439ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)142)) - (((/* implicit */int) var_3))))) * ((~(14342212733524940015ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28664)))));
}
