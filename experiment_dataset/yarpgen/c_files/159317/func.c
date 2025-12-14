/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159317
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_6))) >> (((((/* implicit */int) var_1)) - (57410)))))) ? (((max((((/* implicit */unsigned long long int) var_4)), (5ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 863340225)), (3738941895U)))) || (((/* implicit */_Bool) (+(-863340241))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)112)))))));
                    var_16 -= (!(((/* implicit */_Bool) (unsigned char)136)));
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-863340215), (((/* implicit */int) (short)3903))))) ? (var_11) : (arr_2 [i_0 - 1])));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_11 [(unsigned short)4] [i_0] [i_2] [(unsigned short)4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_5 [i_0] [i_0]))))));
                        var_17 = ((/* implicit */unsigned long long int) (short)32767);
                    }
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */_Bool) var_3);
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((_Bool) var_6)))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 4; i_4 < 19; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12)))) + (3738941890U)));
        var_19 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 7725244073396401912ULL)) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_4 - 4])) : (((/* implicit */int) arr_15 [i_4 - 3])))) >> (((((((/* implicit */_Bool) 2047ULL)) ? (626680231U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (626680210U)))));
        arr_17 [i_4] = ((/* implicit */unsigned short) ((long long int) arr_13 [i_4 + 2] [i_4 - 4]));
    }
}
