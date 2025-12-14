/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111245
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
    var_14 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_1 + 2]))));
                        var_16 -= ((/* implicit */short) arr_1 [i_0]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) var_4);
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_18 |= ((/* implicit */unsigned char) (-((~(((/* implicit */int) min(((short)-221), (((/* implicit */short) (signed char)82)))))))));
                            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])) > (((long long int) (short)-205))));
                            var_20 |= ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 18446744073709551606ULL)))));
                        }
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 3] [i_0 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 2] [i_0 - 3]))))) : (arr_17 [i_0] [i_4] [i_5] [i_6] [i_6] [(_Bool)1]))))));
                            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0 - 2])) ? (arr_17 [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 2]) : (arr_17 [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_0 - 3]))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 1931171714)) : (arr_17 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0 - 1])))));
                            var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_5] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)249))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5588))) * (0ULL)))));
                        }
                        arr_23 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_6] [(_Bool)1] [6U] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_6]))));
                        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) 1741614310)) || (((/* implicit */_Bool) var_12))))), (((0) << (((((/* implicit */int) (signed char)-111)) + (129)))))))) % (min((-2LL), (((/* implicit */long long int) ((18446744073709551602ULL) < (var_7))))))));
                        var_25 = max((((/* implicit */long long int) -1558793506)), (25LL));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (signed char i_10 = 4; i_10 < 9; i_10 += 3) 
            {
                for (int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    {
                        arr_34 [i_0] [2U] [(unsigned char)8] [i_11] [(unsigned char)10] = ((/* implicit */signed char) arr_20 [i_11] [i_0]);
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_10])) | (((arr_14 [i_0] [i_0] [6U] [i_11]) % (((/* implicit */unsigned long long int) -2LL))))))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1558793523)) ? (((((/* implicit */_Bool) (short)-221)) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_11] [8ULL]))))))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */short) var_8);
}
