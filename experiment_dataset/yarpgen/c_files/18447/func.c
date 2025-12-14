/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18447
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_6 [i_1] = ((((unsigned long long int) var_9)) - (((unsigned long long int) var_6)));
            var_11 = ((/* implicit */unsigned int) (!((_Bool)1)));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_4);
            var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)7692)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)20156)))))))), (((((((/* implicit */_Bool) -325594291)) ? (15088079508971709275ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) << (((((/* implicit */int) arr_2 [i_0])) - (202)))))));
            arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_0]))) == (var_5))) ? (((/* implicit */int) ((1580963329) > (((/* implicit */int) arr_2 [(unsigned char)7]))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_4 [i_1] [i_0]))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))));
        }
        for (unsigned char i_2 = 1; i_2 < 7; i_2 += 4) 
        {
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned short) max((((((/* implicit */int) var_6)) << (((((/* implicit */int) var_7)) - (56270))))), (((((-325594291) + (2147483647))) << (((((/* implicit */int) var_1)) - (47))))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                var_13 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((short) var_5))), (max((((/* implicit */unsigned long long int) arr_0 [i_3])), (var_2))))) + (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_3))))))));
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [(unsigned char)0] [i_4])))))));
                    arr_17 [i_2] [i_2 + 2] [i_2] [i_2] [i_2 + 1] [i_2 + 3] = ((/* implicit */_Bool) arr_14 [i_2] [i_2]);
                    arr_18 [i_2] [4] [i_3] [i_4] = ((/* implicit */_Bool) 8413223938593836053LL);
                }
                arr_19 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)100)), (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (3942830889997376899LL)))) | (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))))));
            }
            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (min((((/* implicit */unsigned long long int) var_0)), (arr_9 [7U]))))))));
            arr_20 [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-101)))), (((/* implicit */int) (unsigned short)50460))))), (3358664564737842340ULL)));
            var_16 -= ((/* implicit */int) ((15088079508971709270ULL) > (((/* implicit */unsigned long long int) (((_Bool)1) ? (max((((/* implicit */long long int) (_Bool)1)), (3857528764569246318LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
        }
        arr_21 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
        arr_22 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) 3857528764569246318LL)) && ((!((_Bool)1))))))));
        arr_23 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((3857528764569246318LL) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0])))))))), (((/* implicit */int) var_6))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_17 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((min((arr_24 [i_5] [i_5]), (arr_24 [i_5] [i_5]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)124)), ((unsigned short)64765))))))), (var_5)));
        arr_26 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_24 [i_5] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_10)))))) : (max((((/* implicit */unsigned long long int) 325594291)), (arr_25 [i_5] [i_5])))))) ? ((~(arr_25 [i_5] [i_5]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13474903482864103599ULL)) ? (((/* implicit */int) arr_24 [i_5] [i_5])) : (((/* implicit */int) (_Bool)1))))), (var_5)))));
        /* LoopNest 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 3; i_7 < 12; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(arr_33 [i_8] [i_6] [i_8] [i_5]))) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) ((16063306780613604812ULL) / (((/* implicit */unsigned long long int) 3387881414U))))) ? (((/* implicit */int) max((var_0), (((/* implicit */short) (unsigned char)3))))) : (((((/* implicit */_Bool) 3755422833985845856ULL)) ? (((/* implicit */int) arr_28 [i_5] [i_6 - 1])) : (((/* implicit */int) var_8)))))) : ((((-(((/* implicit */int) var_1)))) / (((/* implicit */int) var_4))))));
                        var_19 = ((/* implicit */unsigned short) ((((((4732508985296275436LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) - (((/* implicit */long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) (unsigned char)212))))))) < (((/* implicit */long long int) max((-2081909670), (678003949))))));
                        arr_37 [i_8] [i_6] [i_7] [i_8] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) ((unsigned short) arr_24 [i_7] [i_7])))))) != (((/* implicit */int) (!((!((_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) max((-325594291), (2081909646)));
    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
}
