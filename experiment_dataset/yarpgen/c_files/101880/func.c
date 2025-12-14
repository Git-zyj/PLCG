/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101880
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (+(((((/* implicit */_Bool) (short)16368)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_3))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
        var_12 = ((/* implicit */_Bool) max((var_12), ((!(((/* implicit */_Bool) 10910925602578794636ULL))))));
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((unsigned int) 4294967295U)) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-99))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((long long int) 6393337751565211485LL));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_8))));
        arr_7 [i_1] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned short)12269)) : (var_5)))) & (5621956094178430646LL));
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            arr_13 [10U] [4ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */unsigned int) -1393508098)) : (10U)))))))) : (max((max((((/* implicit */unsigned long long int) 4294967295U)), (5940628088881015913ULL))), (min((((/* implicit */unsigned long long int) 2167402597U)), (7ULL)))))));
            var_15 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) arr_2 [i_2]))))));
            arr_14 [i_3] [i_3] = ((((/* implicit */_Bool) ((5ULL) >> (((9223372036854775799LL) - (9223372036854775757LL)))))) && ((!(((/* implicit */_Bool) arr_11 [i_2])))));
        }
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned int) ((((int) arr_9 [i_2])) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((_Bool) 4294967295U)))))));
        var_16 = ((/* implicit */int) max((min((var_4), (((/* implicit */unsigned int) min((arr_1 [(unsigned char)14]), (arr_1 [i_2])))))), (((((((/* implicit */_Bool) 2147483647)) ? (4294967295U) : (1U))) - (min((0U), (((/* implicit */unsigned int) arr_12 [i_2] [i_2]))))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (signed char)-1))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) (-(arr_19 [i_5 + 2] [i_5] [i_5 + 1] [i_5 + 1])));
                    arr_22 [i_2] [i_4] [i_4] = ((/* implicit */int) arr_1 [i_2]);
                }
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)14)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65518)) || (((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) (!(((((/* implicit */int) (signed char)104)) > (((/* implicit */int) arr_23 [i_6])))))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) var_10)))))), (((((/* implicit */long long int) arr_24 [5])) - (((((/* implicit */long long int) var_10)) & (var_3))))))))));
        var_20 = arr_2 [i_6];
    }
    var_21 = ((/* implicit */int) ((((/* implicit */long long int) (-(var_7)))) / (1672582333387984139LL)));
}
