/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145803
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
    var_17 = ((/* implicit */unsigned long long int) var_6);
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_13))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) arr_2 [i_0] [10ULL]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */short) 18352320154525017083ULL);
            arr_8 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_0]))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18352320154525017083ULL)) ? (15406066938581512766ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10168)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1039079290)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_3] [i_4] [i_2]))) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3])))))) : (((long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (10721041676183587380ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_3]))))))));
                    arr_17 [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((3104721155U), (((/* implicit */unsigned int) 880332819))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 94423919184534532ULL)) || (((/* implicit */_Bool) 0ULL))))) : (((arr_15 [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */int) arr_14 [i_3] [i_3])) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_4] [i_4]))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_12 [i_2] [i_2])) & (((/* implicit */int) arr_14 [(unsigned short)0] [i_3])))), (((((/* implicit */int) arr_12 [i_4] [i_3])) | (((/* implicit */int) arr_10 [i_3] [i_4]))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_16 [8LL] [i_2] [i_2])))))) : (min((-8410629064785582085LL), (((/* implicit */long long int) (unsigned short)55367))))));
                    arr_18 [i_4] = (((~((~(4294967295U))))) >= (((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)22604))))));
                }
            } 
        } 
    }
    var_22 |= ((/* implicit */_Bool) ((int) (~(((((/* implicit */_Bool) var_5)) ? (8914028397769696267LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
}
