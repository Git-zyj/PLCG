/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158949
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_15 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) -878148508)) : (var_12))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))))));
        var_16 += ((/* implicit */int) ((18446744073709551613ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 16; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) ((unsigned char) -878148487));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */long long int) var_8);
                            var_19 = ((/* implicit */long long int) arr_10 [i_1] [i_2] [i_1] [i_2] [i_1] [i_1]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(7637351637881214574LL)))) - (((((/* implicit */_Bool) var_1)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) -878148515))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (-7637351637881214574LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) + (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2 + 2] [i_2 + 2] [i_2])))));
                            var_22 |= ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52152))));
                            arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (-1442302883)));
                        }
                    }
                } 
            } 
            var_23 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (13668782990432244329ULL) : (var_8))) / (var_12)));
            var_24 = ((/* implicit */unsigned short) ((signed char) -878148494));
        }
        for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 2) 
        {
            var_25 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_11)))) >= (((/* implicit */int) ((unsigned short) ((unsigned char) var_10))))));
            arr_20 [i_7] = ((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_1]));
        }
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 7637351637881214574LL)) ? (7112753045768840915ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((var_6) / (((/* implicit */unsigned long long int) var_10))))))) ? (((((/* implicit */unsigned long long int) -9LL)) * (((((/* implicit */_Bool) 4ULL)) ? (13668782990432244349ULL) : (((/* implicit */unsigned long long int) 8350755325828546028LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))))));
    }
    var_27 = ((/* implicit */long long int) var_3);
}
