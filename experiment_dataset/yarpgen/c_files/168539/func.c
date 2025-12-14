/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168539
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (-736578138737587825LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) == (var_13)))))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5ULL) | (((/* implicit */unsigned long long int) 3411842350U))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))))));
                var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((((/* implicit */unsigned long long int) -736578138737587825LL)) - (530480178896791342ULL))) : (((/* implicit */unsigned long long int) ((int) -4429714478585451608LL)))))));
                var_20 |= ((/* implicit */long long int) min((min(((-(((/* implicit */int) arr_5 [i_0] [i_0])))), ((~(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) max((((/* implicit */short) (!(var_9)))), ((short)32766))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) var_2)) ? (var_12) : (arr_8 [i_0] [i_1] [i_2 - 1] [i_3]))))) > (((/* implicit */long long int) ((/* implicit */int) ((short) arr_8 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]))))));
                            var_21 = ((/* implicit */short) (+(((((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [(unsigned char)5]))) : (var_15))) | (arr_8 [i_3] [i_3] [i_3 + 2] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            {
                arr_16 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)15890)) ? (arr_9 [i_4] [i_4] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_4])) == (((/* implicit */int) var_14))))))))));
                var_22 = ((unsigned char) ((((/* implicit */_Bool) arr_8 [(unsigned short)22] [i_4] [i_5] [i_4])) ? (max((((/* implicit */long long int) -890155792)), (var_12))) : (((/* implicit */long long int) ((3822260616U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15919))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32764), (((/* implicit */short) (unsigned char)12)))))) : (((unsigned long long int) var_5))))));
    var_24 &= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) (unsigned char)76))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_1))))) < (((/* implicit */unsigned long long int) max((8941557840894221538LL), (((/* implicit */long long int) (unsigned short)21795)))))));
}
