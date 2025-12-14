/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175766
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    var_13 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 24; i_0 += 3) 
    {
        arr_2 [12] [i_0] = ((/* implicit */unsigned int) (signed char)-66);
        arr_3 [i_0] = ((/* implicit */short) var_5);
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (!((_Bool)1)))) > (((/* implicit */int) min(((unsigned char)175), ((unsigned char)149)))))));
            var_15 = ((/* implicit */int) max((max((var_5), (((/* implicit */unsigned short) arr_5 [i_1 + 1])))), ((unsigned short)21997)));
        }
        var_16 += ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_3) : (var_9))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)58457)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2040)))), (((/* implicit */int) ((_Bool) 2686088233U))))))));
        arr_8 [i_1] [i_1 - 1] = min((((/* implicit */unsigned long long int) min(((unsigned short)63506), (((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1))))))), (6347516852248171540ULL));
    }
    var_17 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) var_8))))));
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_19 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6940))) <= (min((((/* implicit */unsigned int) var_4)), (2077887820U)))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_12 [(unsigned char)4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (((((((/* implicit */int) (unsigned char)228)) != (((/* implicit */int) (unsigned short)15433)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (10ULL))))))));
                }
            } 
        } 
    } 
}
