/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111200
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) var_0)) > (((((/* implicit */int) var_18)) + (((/* implicit */int) var_19))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_19))))) : ((-(var_3))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (max((((min((14860758228960542LL), (((/* implicit */long long int) (unsigned short)8817)))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 15728640)) && ((_Bool)1))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)6)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    var_22 *= ((/* implicit */unsigned int) ((1132247670509845505LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (((+(min((arr_0 [i_2 - 2]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-37))))), (((short) (short)-32760)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_16)), (var_13)))), (((arr_0 [i_0]) - (((/* implicit */unsigned long long int) arr_2 [(_Bool)1])))))) * (max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)13))))))));
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_1 [i_0])))), ((-(((/* implicit */int) (_Bool)1))))));
    }
    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_24 *= (((+(arr_9 [i_3]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)32760)))));
        var_25 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_9 [i_3])))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (int i_5 = 2; i_5 < 20; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    {
                        var_26 = ((/* implicit */int) var_12);
                        arr_18 [15ULL] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) (signed char)-12);
                        arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (_Bool)1);
                        var_27 = ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        arr_22 [i_7] = ((/* implicit */unsigned char) max((6498621021345093811ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_23 [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_12))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) var_8)))))))), ((-(3693935513901158323LL)))));
        var_28 = ((/* implicit */unsigned char) min((18014398509481968ULL), (11910905863304687159ULL)));
    }
    var_29 ^= min((((/* implicit */unsigned long long int) max((8296581171987669164LL), (((/* implicit */long long int) (_Bool)1))))), (max((max((var_10), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_1)))));
}
