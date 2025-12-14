/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156690
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
    var_11 &= ((/* implicit */unsigned short) min((min((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_0)))), ((-(((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6055))) : (-5914528408765472884LL)))) ? (((/* implicit */int) min((var_5), (var_6)))) : (((/* implicit */int) min(((_Bool)0), (var_10))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((min((max((((/* implicit */long long int) (unsigned char)237)), (-5407988941361548014LL))), (((/* implicit */long long int) (unsigned char)163)))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1945)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-1182544066)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4061962347749923686LL))))) : ((+(((/* implicit */int) (unsigned char)29))))));
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_13 [i_0] [i_1] [i_0] [i_3] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
                        }
                        for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            arr_17 [i_0] [(unsigned char)3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_12 [i_0] [i_3] [i_0] [i_3] [i_5]) <= (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_5]))))) & ((~(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                            var_14 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)6056)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_0] [i_3] [i_5])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_2] [i_0] [i_3] [i_5])))))));
                            arr_18 [i_1] [i_0] = (-(-576372970));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~((+(((/* implicit */int) (signed char)(-127 - 1))))))))));
                        }
                        arr_19 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_1)) : (arr_2 [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [10ULL] [i_0]))))) : (((-8042270154451905313LL) / (2808694090350643046LL)))));
                        arr_20 [i_0] [i_0] [i_2] [(unsigned short)9] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) -576372954)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59456))) : (-4765398141357380753LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2]))))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2] [i_1] [i_2] [i_3] [i_3]))))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [(unsigned char)2] [i_0] = ((/* implicit */unsigned short) min((5407988941361548013LL), (min((max((-8042270154451905314LL), (((/* implicit */long long int) (unsigned short)59473)))), (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)253)), (866892710))))))));
                        var_17 = min((max((min((0ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5407988941361548036LL)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -695395370)), (-5407988941361548049LL)))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_18 ^= ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)9] [i_2])) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_7)))), (((/* implicit */int) min((arr_5 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) var_6)))))))));
                        var_19 += ((/* implicit */unsigned short) ((min(((-(-448895406))), (max((arr_9 [i_0] [i_7] [i_2] [i_7]), (((/* implicit */int) (unsigned char)124)))))) | ((-(((/* implicit */int) min((arr_5 [i_0] [i_1 - 1] [i_0]), (((/* implicit */unsigned short) (unsigned char)237)))))))));
                        arr_27 [i_0] [i_1 - 2] [i_2] [i_0] = ((/* implicit */unsigned char) (((~((~(((/* implicit */int) (signed char)123)))))) << (((((/* implicit */int) max(((signed char)110), (((/* implicit */signed char) (_Bool)1))))) >> (((14870103950213571386ULL) - (14870103950213571369ULL)))))));
                    }
                }
            } 
        } 
    } 
}
