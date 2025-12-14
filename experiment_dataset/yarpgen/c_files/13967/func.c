/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13967
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) 561658699276082107LL);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            arr_7 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((arr_1 [i_0]) >> (((arr_1 [i_0]) - (6762079648166574373LL))))) & (((((/* implicit */_Bool) (unsigned char)5)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) : (((/* implicit */unsigned short) ((((arr_1 [i_0]) >> (((((arr_1 [i_0]) - (6762079648166574373LL))) + (2383736794343637264LL))))) & (((((/* implicit */_Bool) (unsigned char)5)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
            var_12 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148))) > (((((/* implicit */_Bool) 561658699276082088LL)) ? (3072798720U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (arr_5 [i_0] [i_0] [i_0])))) ? ((~(-561658699276082107LL))) : (((-561658699276082107LL) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
            var_13 = ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((-561658699276082137LL) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))))))) : (-561658699276082111LL));
        }
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_5 [i_0] [i_0] [i_0]))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_1 [(signed char)4]))));
        var_16 -= ((int) ((unsigned short) (unsigned char)38));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((long long int) -1854045224)))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))))) <= (((unsigned int) 9040841629073648308LL))));
        var_18 = ((/* implicit */short) -561658699276082137LL);
        var_19 = ((((/* implicit */int) ((unsigned short) 12262824403757230989ULL))) < (((((/* implicit */_Bool) min((var_5), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -561658699276082088LL)) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (unsigned char)224)))));
    }
    var_20 -= ((/* implicit */unsigned int) ((_Bool) var_1));
}
