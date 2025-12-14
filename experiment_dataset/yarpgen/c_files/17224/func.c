/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17224
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
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) (short)32767)), (var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) var_9);
                arr_8 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (short)32744)))))) / (arr_1 [i_0 + 1] [i_1 + 2]))) % (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-32744)) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_0])) - (92))))))))) : (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (short)32744)))))) / (arr_1 [i_0 + 1] [i_1 + 2]))) % (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-32744)) + (2147483647))) >> (((((((/* implicit */int) arr_5 [i_0])) - (92))) - (102)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 4) 
            {
                {
                    arr_17 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) arr_11 [i_3]);
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 16; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (short)-32767))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 -= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) min((arr_15 [i_6] [i_3]), (((/* implicit */unsigned char) arr_6 [i_5] [i_2]))))), (7523600707901145858ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10923143365808405757ULL)) && (((/* implicit */_Bool) 10923143365808405757ULL))))))));
                            var_22 = ((/* implicit */short) (!(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (var_13))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                            arr_24 [i_2] [i_3] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-32760)), ((+(arr_2 [i_4 - 2] [16])))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) ((signed char) var_5))) & (((((/* implicit */int) (signed char)29)) >> (((/* implicit */int) arr_18 [i_5 + 1] [i_5])))))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_6))));
                            var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_10 [i_2])), ((short)(-32767 - 1))))) && (((/* implicit */_Bool) ((unsigned long long int) (_Bool)0)))))), ((+((~(((/* implicit */int) (signed char)42))))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((var_15), (arr_9 [i_7] [i_7]))))))))))));
                        }
                        arr_27 [i_4] [i_4] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (short)-32745)))))) * (((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
    } 
}
