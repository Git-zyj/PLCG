/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186654
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) 12957277373318025362ULL))) ? (5489466700391526252ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1)))))))) == (((/* implicit */unsigned long long int) ((int) var_6))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) (-(((((/* implicit */int) var_7)) * (((/* implicit */int) var_4))))));
                    var_12 = ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((((/* implicit */_Bool) ((int) (short)32767))) || (((/* implicit */_Bool) max(((short)23218), (((/* implicit */short) (_Bool)1)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((_Bool) (short)23229)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [(unsigned short)12])))) : (((/* implicit */int) ((((/* implicit */int) (short)23197)) == (((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 2] [i_3])))))))) ? ((~(((((/* implicit */_Bool) (unsigned char)130)) ? (5489466700391526254ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) (signed char)-40))))))));
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0 - 2])), (var_6)))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [i_3 + 1])) ? (((/* implicit */int) (_Bool)0)) : (2147483647))) : (((/* implicit */int) (short)3462))))), (max((((((/* implicit */_Bool) (unsigned short)38025)) ? (arr_11 [i_0] [i_3]) : (arr_6 [(unsigned char)1]))), (var_9))))))));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_3 + 1]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (-1132039863))))) - (max((6285643367679199721ULL), (((/* implicit */unsigned long long int) arr_9 [i_3] [11ULL] [i_3] [i_3])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((_Bool) var_9)))))));
            arr_14 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))) : (arr_6 [(_Bool)1])))) ? (((/* implicit */int) min((var_4), (((/* implicit */short) (_Bool)1))))) : (((var_10) - (((/* implicit */int) (unsigned char)118))))))) <= ((((_Bool)1) ? (arr_6 [i_0 - 2]) : (var_2)))));
        }
        arr_15 [i_0] = ((/* implicit */unsigned char) (~(arr_11 [i_0] [6ULL])));
    }
    for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */int) (((((_Bool)1) && (((/* implicit */_Bool) 4194303ULL)))) ? (((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_4 [i_4 - 1] [i_4 + 1] [i_4 + 1]))) : (max((((/* implicit */unsigned int) (short)32767)), (2983332175U)))));
        var_17 = arr_18 [i_4];
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_22 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (var_10)))) ? ((-(5489466700391526254ULL))) : (((unsigned long long int) (-(var_6))))));
            var_18 -= ((/* implicit */unsigned long long int) (unsigned char)130);
            var_19 = ((/* implicit */long long int) (_Bool)0);
        }
        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            arr_26 [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1922925256)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_6 - 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1226286819)) ? (((/* implicit */int) arr_9 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_6 + 1])) : (((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_6 - 1]))))) : (var_5)));
            var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_3))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6 + 1]))))) == (((/* implicit */unsigned long long int) -3279595010387657843LL))));
        }
        arr_27 [9U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)155))));
        arr_28 [0ULL] = ((/* implicit */_Bool) var_2);
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)24)) & (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_8))))))) == ((-(max((var_6), (var_5)))))));
}
