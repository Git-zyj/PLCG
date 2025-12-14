/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140688
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65514)) ^ (((/* implicit */int) (signed char)-4))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_4 [11LL] [i_0] [0LL] = ((/* implicit */unsigned short) 393703499813588731LL);
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (-9074481951858366860LL) : (((/* implicit */long long int) ((int) arr_1 [i_0])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                var_14 = ((/* implicit */long long int) ((unsigned short) -9074481951858366860LL));
                arr_8 [i_0] [(unsigned short)4] [(unsigned short)5] [(short)6] = ((/* implicit */unsigned short) (~(1138278435)));
                arr_9 [i_0] [2LL] [(unsigned short)10] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)23007)) : (((((/* implicit */_Bool) (short)-8400)) ? (((/* implicit */int) arr_3 [(unsigned short)7])) : (-1138278463)))));
            }
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_15 = ((/* implicit */int) ((((/* implicit */long long int) (-(min((1138278424), (((/* implicit */int) (unsigned short)65535))))))) + (max((6236071320022932246LL), (((/* implicit */long long int) (unsigned short)19582))))));
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [(unsigned short)11] [i_0])) - (((/* implicit */int) arr_3 [(signed char)7]))))) : (arr_7 [i_0 + 1] [i_0 + 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (unsigned short)0)));
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((-1LL), (((/* implicit */long long int) (unsigned short)65526))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0 + 2] [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) ((1138278463) != (((/* implicit */int) arr_6 [(unsigned short)9] [i_0])))))))) : (((((/* implicit */_Bool) arr_20 [i_4 - 2] [6LL] [(short)5] [i_0] [i_4 + 2])) ? (arr_20 [i_4 + 1] [(signed char)12] [10LL] [i_0] [i_4 + 2]) : (arr_20 [i_4 + 4] [(unsigned short)4] [6] [i_0] [i_4 + 3])))));
                            var_19 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) 9074481951858366848LL)))));
                            var_20 -= ((/* implicit */short) var_0);
                        }
                    } 
                } 
            }
        }
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61704)) ? (((/* implicit */int) var_9)) : (1138278435)))) ? (((((/* implicit */_Bool) var_7)) ? (1770577706) : (1138278435))) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) -9074481951858366860LL))));
}
