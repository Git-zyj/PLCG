/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173250
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
    var_15 -= ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) max((4ULL), (18446744073709551596ULL)));
            var_17 = ((/* implicit */unsigned short) var_5);
        }
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) min(((_Bool)1), (var_3)))) >> (((/* implicit */int) ((((/* implicit */int) arr_3 [(signed char)2])) >= (((/* implicit */int) var_3)))))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_2)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_10)))) ? (min((18064182806441144109ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((/* implicit */unsigned long long int) (short)30720))));
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) & (4ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) var_0)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18064182806441144109ULL)) ? (-5211736653791987774LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30474)))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned long long int) min((var_0), (var_0)))), (arr_1 [i_2] [9ULL])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 7; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 2047U)), (4ULL)));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_21 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((var_9) / (var_4)))))) < (((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_14 [i_2])))) ? (14705842735853539294ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)246)) | (((/* implicit */int) ((unsigned short) arr_3 [i_2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)13123)))) == (arr_14 [i_2])));
    }
    for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) arr_23 [(signed char)4]);
        var_23 += ((/* implicit */unsigned char) min((((/* implicit */int) var_12)), (((((/* implicit */int) (unsigned char)176)) % (((/* implicit */int) (_Bool)1))))));
    }
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11))))) >= (((/* implicit */int) var_2)))))));
}
