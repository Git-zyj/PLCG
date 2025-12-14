/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1329
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
    var_19 = ((((/* implicit */_Bool) (short)6436)) ? (3891185709U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)34576))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned int) arr_6 [i_0]);
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_1 [i_2] [i_1]), (arr_1 [i_0] [i_0]))))));
                    arr_8 [(unsigned short)0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) 169183040U)) || (((/* implicit */_Bool) (short)29319)))) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) : ((~((+(((/* implicit */int) arr_7 [(short)5] [i_0] [i_0] [i_2]))))))));
                    arr_9 [i_0] [i_1] [7LL] = ((/* implicit */_Bool) arr_0 [(short)7]);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */long long int) (+(((unsigned long long int) ((((/* implicit */_Bool) (short)29321)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22368))))))));
        var_22 = ((/* implicit */unsigned int) min(((!((!(((/* implicit */_Bool) var_17)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-51)))))))));
        var_23 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 3021106650U)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))));
    }
    for (int i_3 = 2; i_3 < 19; i_3 += 4) 
    {
        var_24 *= ((/* implicit */short) (-(arr_11 [i_3])));
        var_25 = ((/* implicit */int) (((~(6784696501913913429ULL))) >= (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) (_Bool)1)))))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_12))));
        arr_14 [i_3 + 2] = ((/* implicit */unsigned char) -1535498398);
    }
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_27 = ((/* implicit */_Bool) min(((~(6784696501913913419ULL))), (((/* implicit */unsigned long long int) var_10))));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_16 [i_4] [i_4])) / (-1829660031)))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) arr_17 [i_4] [i_4])))))) : (((/* implicit */int) (short)4338))));
    }
    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 3437559594U)) ? (((((/* implicit */_Bool) 11804059081184452223ULL)) ? (((/* implicit */long long int) -1)) : (8306426707734341353LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 857407687U)) != (8796093022176ULL)))))));
        var_29 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((min((((/* implicit */int) arr_16 [(_Bool)1] [i_5])), (arr_13 [i_5] [(_Bool)1]))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 32767U))))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2584544785U)))))));
        var_30 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_16))))));
    }
}
