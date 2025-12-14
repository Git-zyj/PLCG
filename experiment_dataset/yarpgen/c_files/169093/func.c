/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169093
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1085752645U)) ? (3209214651U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_18 = max((((/* implicit */unsigned long long int) ((signed char) 1498740704))), (((((/* implicit */_Bool) (short)32643)) ? (max((((/* implicit */unsigned long long int) 3209214656U)), (var_6))) : (((/* implicit */unsigned long long int) ((var_11) >> (((var_10) - (1721813316U)))))))));
        var_19 = ((/* implicit */long long int) (short)-17782);
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (~(((/* implicit */int) var_15))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) 3209214650U);
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [3] [i_3] [i_4])) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) arr_8 [i_1 + 2]))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) (~(var_9)));
        var_24 = ((/* implicit */signed char) (+(var_6)));
    }
    for (signed char i_5 = 1; i_5 < 16; i_5 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)164))))))) ? (((long long int) arr_4 [i_5])) : (((/* implicit */long long int) var_10)))))));
        /* LoopSeq 2 */
        for (short i_6 = 1; i_6 < 17; i_6 += 4) /* same iter space */
        {
            var_26 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6]))) & ((+(1085752646U)))));
            var_27 = ((/* implicit */_Bool) var_7);
            var_28 = ((/* implicit */short) 3209214659U);
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) arr_8 [7]))));
        }
        /* vectorizable */
        for (short i_7 = 1; i_7 < 17; i_7 += 4) /* same iter space */
        {
            var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) + (arr_4 [i_5 + 1])));
            var_31 = (!(((/* implicit */_Bool) ((int) (unsigned char)241))));
        }
        var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17024))) % (var_3)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)58162))))))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (long long int i_9 = 2; i_9 < 15; i_9 += 4) 
            {
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) (signed char)-1)), (761289494730017133ULL))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [9ULL] [0LL])) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_15)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_34 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (min((((/* implicit */long long int) (-2147483647 - 1))), (arr_15 [i_5 + 2]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 2147483647)) : (arr_15 [i_5 + 2]))));
                                var_35 = ((/* implicit */short) min((var_35), (((short) arr_13 [i_10] [i_9 + 1] [i_8]))));
                                var_36 = ((/* implicit */unsigned int) var_13);
                                var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)31679)) ? (1085752649U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7357)))))))) ? (((((unsigned int) 2147483638)) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3209214652U)) ? (((/* implicit */int) (short)-18124)) : (((/* implicit */int) var_12))))))) : (((/* implicit */unsigned int) (+(-1012699403))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_38 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 8ULL)) && (((((/* implicit */unsigned long long int) 1815322524U)) < (var_5)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    var_39 |= ((/* implicit */int) (!(((/* implicit */_Bool) max(((~(24U))), (((/* implicit */unsigned int) (signed char)(-127 - 1))))))));
    var_40 = ((/* implicit */long long int) var_15);
}
