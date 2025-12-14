/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120961
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
    var_19 = 0ULL;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 = ((unsigned long long int) (-(min((18141265802365869350ULL), (4837843895902985584ULL)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((18446744073709551605ULL), (12863163501983328375ULL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((unsigned long long int) 13608900177806566019ULL))));
                        var_23 = 6ULL;
                        arr_11 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12863163501983328380ULL)) && (((/* implicit */_Bool) 4837843895902985560ULL))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_24 = ((((((/* implicit */_Bool) 16319875903233630772ULL)) ? (9ULL) : (4039054526826884504ULL))) & (1282365157202213040ULL));
                        var_25 = (-(((var_4) & (18446744073709551609ULL))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] = ((unsigned long long int) ((unsigned long long int) var_9));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((unsigned long long int) 19ULL)) % (((((/* implicit */_Bool) 18446744073709551588ULL)) ? (var_4) : (1073741823ULL)))))));
                        var_27 = var_7;
                        var_28 = ((unsigned long long int) 13608900177806566019ULL);
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */_Bool) ((var_14) << (((18446744073709551615ULL) - (18446744073709551584ULL)))))) ? (((((/* implicit */_Bool) 8706803516547569729ULL)) ? (15315869267011567523ULL) : (18446744072635809792ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((12510430978035096964ULL) == (7412854510199055675ULL)))))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 1) 
                        {
                            var_30 = ((((/* implicit */_Bool) ((18446744073709551615ULL) * (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5936313095674454674ULL)))))) : (((unsigned long long int) 14597499106410442362ULL)));
                            var_31 = ((((/* implicit */_Bool) ((4397509640192ULL) & (18446744073709551604ULL)))) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) != (var_14))))));
                            var_32 = ((unsigned long long int) 11326746457649759526ULL);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                        {
                            var_33 |= (((-((~(18446744073709551615ULL))))) * (((unsigned long long int) (!(((/* implicit */_Bool) 4688987105197491360ULL))))));
                            var_34 = ((unsigned long long int) var_11);
                        }
                        var_35 ^= (((((+(15013018350603083884ULL))) + (((unsigned long long int) 18446744073709551606ULL)))) ^ ((+(12369678468240242670ULL))));
                    }
                }
                var_36 = 13757756968512060253ULL;
            }
        } 
    } 
}
