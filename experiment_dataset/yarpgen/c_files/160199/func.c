/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160199
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
    var_10 = ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) -1064673721)) ? (((long long int) arr_0 [i_0] [11LL])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) 2147483648U)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483638U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)2] [(_Bool)1]))))) : (((/* implicit */int) min((var_3), (var_3)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) <= (2147483647U)));
        var_12 = (((((~(((/* implicit */int) arr_0 [i_0] [i_0])))) + (2147483647))) << (((((unsigned long long int) arr_0 [i_0] [i_0])) - (22137ULL))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [(_Bool)1])) < (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = ((int) ((unsigned int) arr_5 [i_1] [(short)10]));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned char i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                for (unsigned char i_4 = 3; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_13 = ((unsigned int) arr_7 [i_1]);
                        var_14 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [(signed char)5])) >> ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (arr_5 [i_1] [(unsigned char)0]))))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] [i_1] = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)510)))) + (((11748237999417734841ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))))))));
    }
    var_15 = ((/* implicit */unsigned long long int) var_0);
}
