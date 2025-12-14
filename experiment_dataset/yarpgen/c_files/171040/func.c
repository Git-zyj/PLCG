/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171040
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
    var_12 = ((/* implicit */unsigned long long int) var_3);
    var_13 = ((/* implicit */long long int) ((((long long int) max((var_9), (((/* implicit */unsigned long long int) var_3))))) != (((long long int) ((((/* implicit */unsigned long long int) var_2)) | (var_5))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((((long long int) ((unsigned long long int) var_0))) + (9223372036854775807LL))) >> (((((long long int) (~(var_10)))) - (2303753762526453692LL))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 749459943663928141ULL)) ? (((/* implicit */unsigned long long int) -8084051040126339699LL)) : (749459943663928138ULL)));
        var_15 = var_2;
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 2])))))) == (min((arr_5 [i_1 + 1]), (4577174803553557053ULL))))))));
        var_17 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((14836523060758217590ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16822722289637959034ULL)) ? (8658808856269758998LL) : (arr_3 [i_1])))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (long long int i_4 = 3; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_18 |= min(((((~(var_0))) + (((8227581801605580330ULL) & (((/* implicit */unsigned long long int) arr_3 [i_3])))))), (((unsigned long long int) ((arr_8 [i_1 + 3] [i_2] [i_3]) < (arr_1 [i_3])))));
                        var_19 = ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) var_2)) ? (16822722289637959034ULL) : (10219162272103971285ULL))), ((~(16822722289637959034ULL)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_17 [15ULL] [4LL] = ((((((((/* implicit */unsigned long long int) arr_16 [i_5] [i_5])) & (3280188514774990139ULL))) | (((/* implicit */unsigned long long int) arr_16 [i_5] [i_5])))) | ((((~(arr_15 [17ULL]))) | (max((1ULL), (arr_15 [i_5]))))));
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (long long int i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    {
                        arr_25 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(8227581801605580359ULL))))));
                        arr_26 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((unsigned long long int) var_0)))))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -4115854863654202260LL)), (5201299773331556264ULL)))) ? (((749459943663928141ULL) | (((/* implicit */unsigned long long int) -8803255203658953679LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_6] [i_5])))))))))));
                            arr_30 [i_7 + 1] [i_6] = ((/* implicit */unsigned long long int) (!(((((var_5) | (arr_18 [i_5]))) < (((((/* implicit */_Bool) 10006504826313898315ULL)) ? (arr_20 [i_5]) : (8227581801605580330ULL)))))));
                        }
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            arr_34 [i_5] [i_6] [20LL] [6LL] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8227581801605580319ULL)) ? (((/* implicit */unsigned long long int) 829041505983625314LL)) : (2701716053134029356ULL)));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((~(var_8))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_33 [i_7 - 1] [i_5] [i_5] [i_8] [i_10]) != (arr_33 [i_7 - 2] [i_5] [16LL] [i_8] [i_7 - 2]))))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            arr_39 [7LL] [i_11] = arr_16 [i_5] [i_5];
            arr_40 [i_5] [i_11] [i_11] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8803255203658953679LL)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10219162272103971279ULL)) && (((/* implicit */_Bool) 0ULL)))))) : ((~(-8803255203658953679LL))))) : (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [1ULL])));
            arr_41 [i_5] [i_5] = min((((((/* implicit */_Bool) (~(0ULL)))) ? (((-7114865176031380694LL) | (2716307256808040626LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_32 [i_5])) >= (1845585677196077046ULL))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_5] [i_11])) || (((/* implicit */_Bool) 6931655437545922170ULL)))) || (((/* implicit */_Bool) min((167084341362568339LL), ((-9223372036854775807LL - 1LL)))))))));
            arr_42 [i_5] [i_5] [21LL] = ((/* implicit */long long int) var_4);
        }
        arr_43 [i_5] = (+((~(var_3))));
        arr_44 [i_5] = ((/* implicit */long long int) min((max((((3625759597675722939ULL) | (var_6))), (((/* implicit */unsigned long long int) ((0ULL) <= (((/* implicit */unsigned long long int) 33554431LL))))))), (((/* implicit */unsigned long long int) min((7897637368390826896LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) 167084341362568339LL))))))))));
    }
}
