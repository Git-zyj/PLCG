/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137653
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) (((((!(arr_0 [i_3]))) ? (arr_3 [i_0]) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) > (2855439078U)))))) | (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11)))) || (arr_5 [i_0] [i_1] [i_2] [i_3]))))));
                        var_17 = var_9;
                    }
                } 
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) min((1439528217U), (1701094204U)));
        var_18 = ((/* implicit */long long int) min((((/* implicit */int) (signed char)-1)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (510064424) : (((/* implicit */int) (_Bool)1))))));
        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [21] [i_0] [7ULL] [i_0] [i_0])) ? ((~((+(arr_4 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned char) arr_0 [i_0])), (((/* implicit */unsigned char) ((_Bool) var_5)))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        arr_13 [i_4] [i_4] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1439528230U)) && (((/* implicit */_Bool) 2874241624U)))) ? (((/* implicit */unsigned long long int) arr_3 [i_4])) : (((var_11) * (((/* implicit */unsigned long long int) arr_3 [(short)3]))))))) ? (min((12U), (3620426646U))) : (min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)17]))) : (var_1))), (((unsigned int) (unsigned short)32256)))));
        arr_14 [i_4] = ((/* implicit */unsigned long long int) arr_6 [8] [8] [i_4] [i_4]);
        var_19 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_7 [(unsigned char)17] [i_4] [i_4] [i_4] [i_4])))));
    }
    for (signed char i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_16 [(signed char)12] [5]))))))) ? (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_5]), (var_8))))) : (((unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(674540639U)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) arr_17 [i_5]))))))));
        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_5])) ? (3721312088824534282LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) min((2855439063U), (var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((-577696996) <= (510064438))))) : ((~(min((((/* implicit */long long int) (signed char)29)), (1166103328087862786LL)))))));
    }
    var_22 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_10)), (min((var_5), (((/* implicit */unsigned int) var_0)))))) | ((~(max((3620426651U), (((/* implicit */unsigned int) (signed char)-21))))))));
    var_23 = ((/* implicit */long long int) var_15);
}
