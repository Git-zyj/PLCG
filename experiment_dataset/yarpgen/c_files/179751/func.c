/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179751
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((unsigned long long int) 89309985882186553ULL)))) ? (((/* implicit */unsigned long long int) min((arr_3 [(unsigned char)6] [(unsigned short)4] [i_0 + 1]), (arr_3 [i_0] [i_0] [i_0 - 1])))) : (((((/* implicit */_Bool) 89309985882186547ULL)) ? (((((/* implicit */_Bool) 89309985882186553ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)91))) : (11866207792528988325ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-91))))))))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) & (89309985882186528ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3475733491798977738ULL))))))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 14971010581910573850ULL)))) : (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */unsigned long long int) -221964459)) : (1ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)112)) ? (arr_3 [i_1] [9] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)84)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (unsigned short)31278)) : (((/* implicit */int) (signed char)94))))) ? (2054508146U) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) << (((((/* implicit */int) (signed char)63)) - (34)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62)))));
                arr_8 [i_0] [(signed char)5] = ((/* implicit */short) (signed char)91);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((6U), (4116443305U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))) : (min((var_6), (((/* implicit */unsigned int) (unsigned char)0))))))) >= (((((/* implicit */_Bool) ((unsigned int) (unsigned char)83))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6048))) : (13509826560155430722ULL)))));
    var_16 ^= ((/* implicit */unsigned int) var_4);
    var_17 = ((/* implicit */unsigned long long int) ((32767) - ((+((~(((/* implicit */int) (signed char)91))))))));
}
