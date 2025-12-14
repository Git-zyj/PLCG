/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109707
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))))) : ((+(((/* implicit */int) var_11))))));
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4161536)) || (((/* implicit */_Bool) ((int) var_0))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))) : (((max((4063232U), (((/* implicit */unsigned int) var_6)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_5)) == (var_2)))))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (((((/* implicit */_Bool) 4063230U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89)))))))) ? (((((/* implicit */_Bool) (short)28547)) ? (4290904063U) : (4294967273U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2])) != (((/* implicit */int) var_1))))))));
    }
    for (unsigned char i_1 = 4; i_1 < 20; i_1 += 3) 
    {
        var_17 = ((/* implicit */short) ((unsigned char) (_Bool)1));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) var_4);
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 2])) ? (max((4294967273U), (((/* implicit */unsigned int) arr_6 [i_1] [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_2] [i_1]) : (((/* implicit */int) arr_3 [i_1 - 1] [i_2]))))))))))));
            arr_9 [i_1 - 1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((int) var_8)) / (-956658398)))) ? (((int) arr_4 [i_1 - 4] [i_1 - 2])) : (((/* implicit */int) ((unsigned char) var_2)))));
            var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_1 + 1]))))) : (((/* implicit */int) (unsigned char)111))));
        }
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1792U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : (4063230U)));
}
