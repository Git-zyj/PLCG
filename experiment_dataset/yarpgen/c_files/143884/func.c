/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143884
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 900723725)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11165)) ? (((/* implicit */unsigned long long int) 3163984579U)) : (15756320119716249351ULL))))));
        arr_4 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */long long int) var_15)) : (5848005506207901473LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)242)) == (((/* implicit */int) (short)21636))))))));
        arr_5 [11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -5848005506207901473LL))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) 1821661938U);
        arr_8 [19] [i_1] = (!(((/* implicit */_Bool) var_2)));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_20 = ((/* implicit */short) ((7722965675237983569LL) == (((/* implicit */long long int) ((/* implicit */int) ((3885302982U) == (65535U)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28770)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (unsigned char)122))))) ? (((((/* implicit */_Bool) (signed char)-7)) ? (((((/* implicit */_Bool) 409664325U)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) : (1208123156U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 1895272124)) : (var_16))))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 9; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            arr_20 [i_3] [i_4] [(unsigned char)3] [(_Bool)1] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)255)), (var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)243)) % (((/* implicit */int) var_0))))) : ((-(var_14)))));
                            arr_21 [i_6] [i_5] [2LL] [i_4] [i_3] |= ((/* implicit */signed char) -1895272124);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */_Bool) 414850301)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19870))) : (521169401U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125))))))));
                            var_22 = ((/* implicit */short) (((+(var_1))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-24763))))));
                        }
                    } 
                } 
                arr_22 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1082955473U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2U)) ? (var_4) : (3773797894U)))) : (((unsigned long long int) (short)3))))) ? (((/* implicit */unsigned long long int) ((((unsigned int) var_5)) | ((~(var_9)))))) : (min((11002126688145222415ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (5848005506207901456LL))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned char) -276743770));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((long long int) -1));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (67108832U)));
                    }
                    arr_28 [i_3] [4LL] [i_3] [i_7] = ((/* implicit */int) ((signed char) (unsigned short)31816));
                    arr_29 [i_3] [i_7] [6LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_13) / (((/* implicit */long long int) 3221225472U))))) ? (((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) (short)26173)))))));
                }
            }
        } 
    } 
}
