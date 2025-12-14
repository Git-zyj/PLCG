/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158064
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 76822073)) & (2891374623U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) arr_2 [(_Bool)1]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_12 [(_Bool)1] [(_Bool)1] [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_1 + 4])) ? (((/* implicit */int) arr_3 [i_1])) : (((1469338801) | (-76822074)))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6467861003871041576LL)) ? (-2084487311) : (-652113433)));
                        arr_13 [i_0] [i_0] [i_1] [i_2 + 1] [i_0] [i_3] = ((/* implicit */short) arr_11 [i_0] [(unsigned char)9] [(unsigned char)9]);
                        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) (unsigned short)9)) ? (((int) arr_8 [(signed char)10] [7U] [(signed char)10])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 1] [i_0]))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
    {
        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)127)) & (((/* implicit */int) (short)24116)))), (arr_14 [i_5])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (max((1469338799), (((/* implicit */int) var_16))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_5] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))), (arr_16 [i_4] [i_4] [i_4]))))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) (signed char)7)), ((unsigned short)55530))))));
                    arr_22 [i_6] [(_Bool)0] [i_4] = ((/* implicit */int) max((((((((/* implicit */int) var_10)) < (((/* implicit */int) (signed char)127)))) ? (((long long int) (unsigned short)56918)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4165926526U)))))), (((/* implicit */long long int) ((signed char) arr_21 [6] [(signed char)6] [(signed char)6] [i_6])))));
                }
            } 
        } 
    } 
}
