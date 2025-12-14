/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167632
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))) : ((~(var_4))))))));
    var_14 = ((/* implicit */short) var_4);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) 1441197298U));
            /* LoopSeq 2 */
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) % (13487146247332770836ULL)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_15 += ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) ((unsigned short) 3596408267U))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))) > (var_0)));
                        arr_16 [11LL] [i_0] = ((/* implicit */unsigned short) 5146205979987263297ULL);
                    }
                }
            }
            for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
            {
                var_16 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)21586)))) : (((((/* implicit */_Bool) ((signed char) (unsigned short)43968))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40983))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_12))))))));
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (((((/* implicit */_Bool) ((long long int) (unsigned short)43968))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))) : (var_4)))));
            }
        }
        for (int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned char) 4891857271869364640ULL))) : ((-(((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned long long int) var_11))))) : (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21576)))))));
            arr_22 [i_0] [i_0] = ((signed char) ((((/* implicit */_Bool) (short)-32735)) || ((_Bool)1)));
            var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)127)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (698559028U)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)187)))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_11))));
            arr_23 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (((_Bool)1) && (((/* implicit */_Bool) var_5)))))) ? (((unsigned int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13)))));
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((((!(((/* implicit */_Bool) (unsigned short)43968)))) ? (((/* implicit */unsigned long long int) var_5)) : (1ULL))) >= (((/* implicit */unsigned long long int) ((int) (unsigned char)9))))))));
        }
        for (unsigned short i_7 = 3; i_7 < 11; i_7 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_3)) : (-1429623862447372193LL)))))))));
            var_21 = ((/* implicit */unsigned int) (~((((+(((/* implicit */int) var_10)))) * (((/* implicit */int) var_6))))));
            arr_28 [(unsigned short)10] |= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((unsigned short) 4959597826376780780ULL))) ? (((((/* implicit */_Bool) var_0)) ? (-1429623862447372171LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_10)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(4959597826376780779ULL)))) ? (((((/* implicit */_Bool) (unsigned short)31979)) ? (3849440878U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51865))))) : (((var_3) << (((((/* implicit */int) (short)-3800)) + (3805))))))))));
            var_22 = ((/* implicit */unsigned int) (signed char)-123);
            arr_29 [i_0] = ((((((((/* implicit */_Bool) (unsigned short)14468)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28866))) : (13487146247332770836ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))))) ? (((/* implicit */int) ((signed char) ((unsigned short) (unsigned short)33539)))) : (((/* implicit */int) ((_Bool) ((16765170058127172655ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
        }
        var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)43959)) ? (((((4959597826376780811ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3796))))) ^ (((/* implicit */unsigned long long int) ((long long int) (unsigned short)43988))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (-5927946231558898658LL))))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (unsigned char i_10 = 3; i_10 < 9; i_10 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) ((long long int) (unsigned short)21570));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 1; i_11 < 11; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_6))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((long long int) (signed char)-113)))));
                        }
                        var_27 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)33556)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))));
                        var_28 = ((/* implicit */unsigned int) (unsigned char)199);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_12 = 4; i_12 < 15; i_12 += 2) 
    {
        arr_41 [i_12 - 3] = ((/* implicit */unsigned short) 4959597826376780780ULL);
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_49 [i_13] [i_14] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 4959597826376780780ULL)) ? (2376364358U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
                    var_29 = ((/* implicit */_Bool) (short)32347);
                }
            } 
        } 
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) 13487146247332770828ULL))));
    }
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) > (((((((/* implicit */_Bool) (unsigned short)19879)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) & (((/* implicit */int) ((signed char) 483393743U)))))));
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)43950)))))));
        var_33 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? ((((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) -1303140549)))) & (11410994471483590236ULL))) : (((/* implicit */unsigned long long int) -4067636518510065061LL))));
    }
    var_34 = ((/* implicit */long long int) 33554431);
}
