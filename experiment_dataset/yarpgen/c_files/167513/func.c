/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167513
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
    var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1025711046)))) ? (min((var_13), (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_4)))))) ? (((/* implicit */long long int) -5880747)) : (var_18)));
    var_21 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-94)) ? (var_17) : (((/* implicit */long long int) 2147483647))))) ? ((-(-2147483630))) : (((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_22 = (~(max((max((((/* implicit */int) var_6)), (2147483647))), ((+(((/* implicit */int) (signed char)-35)))))));
                var_23 ^= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483630)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (unsigned short)30430))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) & (arr_0 [(unsigned short)10]))))), (((((unsigned long long int) 2147483632)) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)35112)) ? (((/* implicit */int) (_Bool)1)) : (-2147483630))))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 2147483647)), (3400960009U)))), (((arr_3 [i_1] [i_1] [i_1 - 3]) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) | (arr_2 [12]))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_16 [i_3 - 1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_0])), ((unsigned short)30430)))) ? (((/* implicit */unsigned long long int) min((15), (((/* implicit */int) (_Bool)0))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_1 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) min((min((arr_4 [i_0]), (((/* implicit */unsigned char) var_10)))), (((/* implicit */unsigned char) min(((_Bool)1), (var_3)))))))));
                            arr_17 [i_0] [i_0] = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_22 [i_5 + 2] [i_4] [i_0] [i_1] [(signed char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (min((((((/* implicit */_Bool) 6639216159226812845ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28832))) : (365371951197128897LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (3000708221U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) -5880747)), (var_18))) < (((/* implicit */long long int) ((((/* implicit */int) (signed char)8)) | (((/* implicit */int) (signed char)-2)))))))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8238291322887407298LL)) || (((/* implicit */_Bool) 2204811159883597073ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)233))));
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_5))));
}
